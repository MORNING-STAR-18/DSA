import cv2
import serial
import time

# --- YAHAN APNI SETTINGS DAALO ---
VIDEO_FILE = "mera_video.mp4"  # Yahan apni MP4 file ka naam/path likho
COM_PORT = "COM12"              # Arduino IDE mein dekh lo kaunsa COM port hai
BAUD_RATE = 115200

# Ye characters pixels ki brightness batayenge (Dark se Light)
ASCII_CHARS = [" ", ".", ":", "-", "=", "+", "*", "#", "%", "@"]

def pixel_to_ascii(pixel_val):
    index = int((pixel_val / 255.0) * (len(ASCII_CHARS) - 1))
    return ASCII_CHARS[index]

# Serial Port Connect karo
try:
    ser = serial.Serial(COM_PORT, BAUD_RATE, timeout=1)
    time.sleep(2) # Arduino ke reset hone ka wait
    print("Arduino Connected! Sending Video...")
except Exception as e:
    print(f"Error: {e}")
    exit()

# Video Open karo
cap = cv2.VideoCapture(VIDEO_FILE)

while cap.isOpened():
    ret, frame = cap.read()
    if not ret:
        break # Video khatam

    # Video ko Grayscale (Black & white) mein convert karo
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    
    # Video ko 16x2 pixels (LCD size) mein chota karo
    resized = cv2.resize(gray, (16, 2))

    # Frame ko 32-character ki string mein convert karo
    lcd_frame = ""
    for row in range(2):
        for col in range(16):
            lcd_frame += pixel_to_ascii(resized[row, col])

    # String ko Arduino ko bhej do
    ser.write(lcd_frame.encode('utf-8'))

    # LCD dheere update hoti hai, isliye thoda delay (approx 10 FPS)
    time.sleep(0.1)

cap.release()
ser.close()
print("Video Stream Complete!")