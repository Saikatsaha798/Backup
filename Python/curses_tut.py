import curses, time
from curses import wrapper
from curses.textpad import Textbox, rectangle

# WRAPPER gives us a pre-intialised object of curses, in this case it is title_win.

def main(stdscr):
    # stdscr.clear()                      # Clears the terminal

    rectangle(stdscr, 14, 0, 20, (curses.COLS//2)-1)
    rectangle(stdscr, 14, (curses.COLS//2)+1, 20, curses.COLS-1)
    stdscr.refresh()

    curses.init_pair(1, curses.COLOR_GREEN, curses.COLOR_BLACK,)
    curses.init_pair(2, curses.COLOR_RED, curses.COLOR_BLACK,)

    # Initialize a colour pair, format:
    #                Id     Text Colour      Background Colour

    margin1 = curses.newwin(1, curses.COLS, 1, 0)
    
    for i in range(curses.COLS-1):
        margin1.addstr("-")

    margin1.refresh()

    margin2 = curses.newwin(1, 2, 0, 13)

    margin2.addstr("|")

    margin2.refresh()

    margin3 = curses.newwin(1, curses.COLS, 11, 0)

    for i in range(curses.COLS-1):
        margin3.addstr("-")

    margin3.refresh()

    margin4 = curses.newwin(1, curses.COLS, 13, 0)

    for i in range(curses.COLS-1):
        margin4.addstr("-")

    margin4.refresh()

    margin5 = curses.newwin(8, 1, 14, curses.COLS//2)

    for i in range(7):
        margin5.addstr("|")
    
    margin5.refresh()

    margin6 = curses.newwin(1, curses.COLS, 21, 0)

    for i in range(curses.COLS-1):
        margin6.addstr("-")
    
    margin6.refresh()

    title_win = curses.newwin(1, curses.COLS-50, 0, 50)

    title_win.addstr(0, 0, "Hello", curses.color_pair(1) | curses.A_BOLD)      

    # | to combine attributes 

    # Calling colour pair as ATTRIBUTE with its corresponding ID

    # ADDSTR adds string to terminal, where first two are row and column, and other annotations / attributes can be added like :
    # format : "curses.SYNTAX"
    # SYNTAX:
        # A_BLINK             Blinking text
        # A_BOLD              Extra bright or bold text
        # A_DIM               Half bright text
        # A_REVERSE           Reverse-video text
        # A_STANDOUT          The best highlighting mode available
        # A_UNDERLINE         Underlined text

    title_win.refresh()                    # Forces to refresh the terminal
    time.sleep(2)
    title_win.clear()
    title_win.addstr(0, 0, "Welcome", curses.A_STANDOUT)
    title_win.refresh()
    time.sleep(2)
    title_win.clear()
    title_win.addstr(0, 0, "First Curses Program", curses.A_UNDERLINE)
    title_win.refresh()
    time.sleep(2)
    title_win.refresh()
    time.sleep(2)

    
    counter_win = curses.newwin(1, 11, 0, 0)

    for i in range(100):
        counter_win.clear()
        if (i%2==0):
            counter_win.addstr(f"Count : {i}", curses.color_pair(1))
        else:
            counter_win.addstr(f"Count : {i}", curses.color_pair(2))      
        counter_win.refresh() 
        time.sleep(0.1)

    
    content = curses.newpad(100,100)

    for i in range(2221):
        content.addstr(f"{i}_")

    for i in range(curses.COLS-25):
        content.refresh(0, i, 2, i, 10, 25+i)
        time.sleep(0.2)

    input_win = curses.newwin(1, 18, 12, 0)

    input_win.addstr("Press any button!")
    input_win.refresh()

    inp = input_win.getkey()

    input_win.clear()
    input_win.refresh()

    input_win.addstr(f"Key : {inp}")
    input_win.refresh()

    text_win = curses.newwin(5, (curses.COLS//2)-2, 15, 1)
    text_box = Textbox(text_win)

    text_box.edit()

    text = text_box.gather().strip().replace("\n", "")

    output_text = curses.newwin(5, ((curses.COLS-1)-((curses.COLS//2)+2)), 15, (curses.COLS//2)+2)

    output_text.addstr(text)
    output_text.refresh()


    margin1.getch()

    # stdscr.getch()

wrapper(main)