import login
import search_train
import search_station
from datetime import datetime

if __name__ == "__main__":
    # run, user = login.entry()
    run, user = True, "Saikat Saha"
    
    while run:
        time_obj = datetime.now()
        print(f"Welcome {user.split(' ')[0]},\n\nTime : {time_obj.strftime('%H:%M')}\nDate : {time_obj.strftime('%d-%b-%Y')}\n\nMENU :\n1. Book ticket\n2. Search train\n3. Search station\n4. Show ticket\n5. Wallet\n6. Log out")
        choice = int(input("Enter choice : "))

        if (choice == 1):
            NOTbooked = True
            while NOTbooked:
                print("\nBook ticket\n-----------\n")

                break

        elif (choice == 2):
            NOTsearched = True
            while NOTsearched:
                print("\nSearch train\n------------")

                src = input("Enter Source Station : ")
                dest = input("Enter Destination Station : ")

                print()

                NOTsearched = not search_train.searchT(src, dest)

        elif (choice == 3):
            NOTsearchedST = True
            while NOTsearchedST:
                print("\nSearch station\n--------------")
                station = input("Enter station to search : ")

                print()

                NOTsearchedST = not search_station.searchS(station)
        
        elif (choice == 4):
            print("\nShow ticket\n-----------")

        elif (choice == 5):
            print("\nWallet\n------")

        elif (choice == 6):
            print("\nLogged out !\n")
            run, user = login.entry()

        print()