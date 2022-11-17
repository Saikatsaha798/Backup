import pyautogui, time

time.sleep(3)
# print(pyautogui.position())
# pyautogui.moveTo(1920/2,1080/2)
# pyautogui.moveRel(100,100,2)

distance = 500
gap = 10

while distance>0:
    pyautogui.mouseDown()
    pyautogui.moveRel(distance, 0, 1)
    
    distance-=gap
    
    pyautogui.moveRel(0, distance, 1)
    
    distance-=gap
    
    pyautogui.moveRel(-distance, 0, 1)
    
    distance-=gap
   
    pyautogui.moveRel(0, -distance, 1)
    pyautogui.mouseUp()
    distance-=gap