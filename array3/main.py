import time
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.options import Options

# --- IIT LEVEL OPTIMIZATION: EAGER LOADING ---
chrome_options = Options()
chrome_options.add_argument("--headless=new") # Invisible
chrome_options.add_argument("--disable-gpu")
chrome_options.add_argument("--no-sandbox")
chrome_options.add_argument("--disable-extensions")
chrome_options.add_argument("--blink-settings=imagesEnabled=false") # No Images
chrome_options.add_argument("--user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36")

# !!! MAGIC LINE !!!
# Browser ko bolenge: "Pura page load mat karo, bas text dikha do"
chrome_options.page_load_strategy = 'eager'

print("\n" + "="*40)
print("🚀 STARTING: INSTANT INTERCEPT MODE")
print("="*40)

driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=chrome_options)
# Timeout badha diya taaki crash na ho, par Eager mode pehle hi kaam kar dega
driver.set_page_load_timeout(60) 

def fast_click():
    """Bina image wait kiye text dhoond ke click karega"""
    keywords = ["continue", "visit site", "verify", "get link", "open", "next", "unlock", "click here"]
    
    # Fast scan using CSS Selectors (Faster than XPath)
    # Hum directly wo buttons target kar rahe hain jo 'visible' hain
    buttons = driver.find_elements(By.CSS_SELECTOR, "a, button, div[role='button']")
    
    for btn in buttons:
        try:
            # Text jaldi se nikalo
            txt = btn.get_attribute("innerText") or ""
            txt = txt.lower().strip()
            
            if any(key in txt for key in keywords) and len(txt) < 50:
                print(f"⚡ ACTION: Clicked '{txt.upper()}'")
                driver.execute_script("arguments[0].click();", btn)
                return True
        except:
            continue
    return False

try:
    url = "https://arolinks.com/1coG"
    print(f"[*] Hitting URL: {url}")
    
    try:
        driver.get(url)
    except:
        print("[!] Page load timeout (Ignored because we are Eager)")
    
    # --- AGGRESSIVE LOOP (10 Sec max per step) ---
    for step in range(1, 15):
        print(f"\r🔄 Scanning Step {step}...", end="")
        
        # 1. Turant Click Try karo (Wait mat karo)
        if fast_click():
            time.sleep(8) # Server validation wait
        else:
            # Agar button nahi mila, tabhi scroll karo
            driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
            time.sleep(1)
        
        # 2. Ads Killer (Window Handle Check)
        if len(driver.window_handles) > 1:
            driver.switch_to.window(driver.window_handles[1])
            driver.close()
            driver.switch_to.window(driver.window_handles[0])
            print(" -> 🚫 Popup Killed")

        # 3. Final Link Check
        curr = driver.current_url
        if "drive.google" in curr or "mega.nz" in curr or "mediafire" in curr:
            print("\n\n" + "★"*40)
            print(f"🎉 SUCCESS: {curr}")
            print("★"*40)
            break
            
except Exception as e:
    print(f"\n❌ Error: {e}")

finally:
    driver.quit()