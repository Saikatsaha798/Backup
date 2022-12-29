import curses, time
from curses import wrapper

# WRAPPER gives us a pre-intialised object of curses, in this case it is title_win.

def main(stdscr):
    stdscr.clear()                      # Clears the terminal

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

    for i in range(990):
        content.addstr(f"{i}_")

    for i in range(25):
        content.refresh(0, i, 2, i, 25, 25+i)
        time.sleep(1)


    # stdscr.getch()

wrapper(main)