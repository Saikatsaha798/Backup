from ast import main
import pyautogui, time
from PIL import Image, ImageGrab

if __name__ == "__main__":
    time.sleep(5)
    pyautogui.click(x=100, y=200)

    C = True
    while True:
        pic = ImageGrab.grab()
        data = pic.load()
        if data[100,200] == (75, 219, 106) and C:
            pyautogui.click(x=100, y=200)
            break
                

    # pic.show()

    # (206, 38, 54)