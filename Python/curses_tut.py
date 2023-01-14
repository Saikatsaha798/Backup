import curses, time
from curses import wrapper
from curses.textpad import Textbox, rectangle

# WRAPPER gives us a pre-intialised object of curses, in this case it is title_win.

def main(stdscr):
    # stdscr.clear()                      # Clears the terminal

    curses.echo()

    curses.init_pair(1, curses.COLOR_GREEN, curses.COLOR_BLACK,)
    curses.init_pair(2, curses.COLOR_RED, curses.COLOR_BLACK,)
    curses.init_pair(3, curses.COLOR_YELLOW, curses.COLOR_BLACK,)
    curses.init_pair(4, curses.COLOR_CYAN, curses.COLOR_BLACK,)
    curses.init_pair(5, curses.COLOR_BLUE, curses.COLOR_BLACK,)
    curses.init_pair(6, curses.COLOR_MAGENTA, curses.COLOR_BLACK,)

    stdscr.attron(curses.color_pair(1))
    rectangle(stdscr, 14, 0, 20, (curses.COLS//2)-1)
    stdscr.attroff(curses.color_pair(1))
    stdscr.attron(curses.color_pair(2))
    rectangle(stdscr, 14, (curses.COLS//2)+1, 20, curses.COLS-1)
    stdscr.attroff(curses.color_pair(2))
    stdscr.refresh()

    

    # Initialize a colour pair, format:
    #                Id     Text Colour      Background Colour

    # margin1 = curses.newwin(1, curses.COLS, 1, 0)
    
    # for i in range(curses.COLS-1):
    #     margin1.addstr("-")

    # margin1.refresh()

    # margin2 = curses.newwin(1, 2, 0, 13)

    # margin2.addstr("|")

    # margin2.refresh()

    # margin3 = curses.newwin(1, curses.COLS, 11, 0)

    # for i in range(curses.COLS-1):
    #     margin3.addstr("-")

    # margin3.refresh()

    # margin4 = curses.newwin(1, curses.COLS, 13, 0)

    # for i in range(curses.COLS-1):
    #     margin4.addstr("-")

    # margin4.refresh()

    # margin5 = curses.newwin(8, 1, 14, curses.COLS//2)

    # for i in range(7):
    #     margin5.addstr("|")
    
    # margin5.refresh()

    # margin6 = curses.newwin(1, curses.COLS, 21, 0)

    # for i in range(curses.COLS-1):
    #     margin6.addstr("-")
    
    # margin6.refresh()

    title_win = curses.newwin(3, curses.COLS-12, 0, 12)

    title_win.attron(curses.color_pair(4))
    title_win.border()
    title_win.attroff(curses.color_pair(4))

    title_win.addstr(1, 38, "Hello", curses.color_pair(1) | curses.A_BOLD)      

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

    title_win.attron(curses.color_pair(4))
    title_win.border()
    title_win.attroff(curses.color_pair(4))

    title_win.addstr(1, 38, "Welcome", curses.A_STANDOUT)
    title_win.refresh()
    time.sleep(2)
    title_win.clear()

    title_win.attron(curses.color_pair(4))
    title_win.border()
    title_win.attroff(curses.color_pair(4))

    title_win.addstr(1, 38, "First Curses Program", curses.A_UNDERLINE)
    title_win.refresh()
    time.sleep(2)
    title_win.refresh()
    time.sleep(2)

    
    counter_win = curses.newwin(3, 12, 0, 0)

    counter_win.attron(curses.color_pair(6))
    counter_win.border()
    counter_win.attroff(curses.color_pair(6))
    

    for i in range(100):
        counter_win.clear()
        counter_win.border()
        if (i%2==0):
            counter_win.addstr(1, 1, f"Count : {i}", curses.color_pair(1))
        else:
            counter_win.addstr(1, 1, f"Count : {i}", curses.color_pair(2))      
        counter_win.refresh() 
        time.sleep(0.1)

    
    content = curses.newpad(8,curses.COLS)
    content.border()

    for i in range(233):
        content.addstr(f"{i}_")

    for i in range(curses.COLS-15):
        content.attron(curses.color_pair(3))
        content.border()
        content.attron(curses.color_pair(3))
        content.refresh(0, i, 3, i, 10, 15+i)
        
        time.sleep(0.1)

    input_win = curses.newwin(3, curses.COLS, 11, 0)

    input_win.attron(curses.color_pair(5))
    input_win.border()
    input_win.attroff(curses.color_pair(5))

    input_win.addstr(1,1, "Press any button!")
    input_win.refresh()

    inp = input_win.getkey()

    input_win.clear()
    input_win.refresh()

    input_win.attron(curses.color_pair(5))
    input_win.border()
    input_win.attroff(curses.color_pair(5))

    input_win.addstr(1,1, f"Key : {inp}")
    input_win.refresh()

    text_win = curses.newwin(5, (curses.COLS//2)-2, 15, 1)
    text_box = Textbox(text_win)

    text_box.edit()

    text = text_box.gather().strip().replace("\n", "")

    output_text = curses.newwin(5, ((curses.COLS-1)-((curses.COLS//2)+2)), 15, (curses.COLS//2)+2)

    output_text.addstr(text)
    output_text.refresh()

    stdscr.move(21, 0)
    
    stdscr.refresh()

    while True:
        a = stdscr.getkey()
        if a == "|" :
            break

    # time.sleep(5)

    # text_win.getch()


    # stdscr.getch()

wrapper(main)