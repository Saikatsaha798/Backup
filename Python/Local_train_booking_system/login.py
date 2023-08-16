from getpass import getpass
from prettytable import PrettyTable
import os
import pickle
from cryptography.fernet import Fernet

def signup():
    if "user_data" in os.listdir():
        with open("user_data", "rb") as f:
            UserData = pickle.load(f)
        key = UserData["key_FERNET"]
    else:
        UserData = dict()
        key = Fernet.generate_key()
        UserData["key_FERNET"] = key

    fernet = Fernet(key)

    print("SignUp\n-------")

    while True:
        usr = input("Enter Username : ")
        if (usr in UserData.keys()):
            print("Username not available !")
        else:
            break
    while True:
        pas = getpass("Enter Password : ")
        pasN = getpass("Enter Password again : ")

        if pas == pasN:
            UserData[usr] = fernet.encrypt(bytes(pas, "utf-8"))
            with open("user_data", "wb") as f:
                pickle.dump(UserData, f)
            print("User added !")
            break
        else:
            print("Passwords do not match !")    

def login():
    if "user_data" in os.listdir():
        with open("user_data", "rb") as f:
            UserData = pickle.load(f)
        key = UserData["key_FERNET"]
        fernet = Fernet(key)
    else:
        print("No data present, try signing up !")
        return False

    usr = input("Enter Username : ")
    if usr in UserData.keys():
        pas = getpass("Enter Password : ")
        if fernet.decrypt(UserData[usr]).decode() == pas:
            print("Logged in !")
            return True
        else:
            print("Wrong password !")
            return False
    else:
        print(f"{usr} username not in data !")
        return False, usr
    
def entry():
    locked = True
    while (locked):
        print("Welcome to E-Ticket,\nChoose from below :\n1. Login\n2. Signup\n3. Exit")
        choice = int(input("Enter choice : "))

        if (choice == 1):
            locked, user = login()
            locked = not locked
        elif (choice == 2):
            signup()
        elif (choice == 3):
            print("\nThanks for using !\n")
            return False, "NA"
        else:
            print("\nWrong choice !\n")
        
    return True, user

if __name__ == "__main__":
    entry()

