import time
import sys
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
from selenium.webdriver.chrome.options import Options

# --- SETUP ---
chrome_options = Options()
chrome_options.add_argument("--headless=new") # Invisible Mode
chrome_options.add_argument("--disable-notifications")
chrome_options.add_argument("--user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36")

print("\n" + "="*50)
print("🚀 STARTING: V10 (VIDEO MATCHED LOGIC)")
print("   👉 Steps: Wait 20s -> Ignore Verify -> Click Continue")
print("="*50)

driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=chrome_options)
driver.set_page_load_timeout(60)

def click_correct_button():
    """Sirf Continue dhoondega, Verify ko ignore karega"""
    # Hum 'Verify' ko blacklist kar rahe hain
    elements = driver.find_elements(By.TAG_NAME, "button") + driver.find_elements(By.TAG_NAME, "a") + driver.find_elements(By.TAG_NAME, "div")
    
    for btn in elements:
        try:
            if not btn.is_displayed(): continue
            txt = btn.text.lower().strip()
            
            # Target Keywords: Sirf Continue/Next
            if "continue" in txt or "next" in txt or "get link" in txt:
                # Trap Keywords: Agar 'Verify' ya 'Scan' likha hai toh CHHOD DO
                if "verify" in txt or "scan" in txt or "download" in txt:
                    continue
                    
                print(f"      ⚡ ACTION: Found Real Button '{btn.text}' -> CLICKING!")
                driver.execute_script("arguments[0].click();", btn)
                return True
        except:
            continue
    return False

try:
    url = "https://arolinks.com/1coG"
    print(f"[*] Connecting: {url}")
    driver.get(url)
    
    # --- 3 STEPS LOOP ---
    for step in range(1, 4):
        print(f"\n🔄 STEP {step}/3: Processing...")
        
        # 1. WAIT FOR TIMER (Video ke hisab se 20s safe hai)
        print("   ⏳ Waiting 20 seconds (Ignoring Verify button)...")
        for i in range(20, 0, -1):
            sys.stdout.write(f"\r      Time Left: {i}s ")
            sys.stdout.flush()
            time.sleep(1)
        print("\n")
            
        # 2. SCROLL DOWN (Asli button niche hota hai)
        print("   ⬇️ Scrolling to bottom...")
        driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
        time.sleep(3)
        
        # 3. CLICK 'CONTINUE' ONLY
        print("   🔍 Searching for 'Continue'...")
        if click_correct_button():
            print("   -> Continue clicked. Moving to next page...")
            time.sleep(8) # Redirect wait
        else:
            print("   ⚠️ Continue button nahi mila (Retrying...)")
        
        # 4. POPUP HANDLING
        if len(driver.window_handles) > 1:
            driver.switch_to.window(driver.window_handles[1])
            driver.close()
            driver.switch_to.window(driver.window_handles[0])
            print("   🚫 Ad Closed.")

    # --- FINAL PAGE ---
    print("\n🏁 FINAL STEP: Getting Link...")
    time.sleep(10) # Final timer
    click_correct_button() # Get Link dabayega
    
    time.sleep(5)
    print("\n" + "★"*50)
    print(f"🎉 BYPASSED: {driver.current_url}")
    print("★"*50)

except Exception as e:
    print(f"\n❌ Error: {e}")

finally:
    driver.quit()