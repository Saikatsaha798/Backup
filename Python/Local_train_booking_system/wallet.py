import os
import pickle
from cryptography.fernet import Fernet

class wallet :
    def __init__(self):
        if "user_data" in os.listdir():
            with open("user_data", "rb") as f:
                UserData = pickle.load(f)
            key = UserData["key_FERNET"]

        else:
            UserData = dict()
            key = Fernet.generate_key()
            UserData["key_FERNET"] = key
            with open("user_data", "wb") as f:
                pickle.dump(UserData, f)
        
        fernet = Fernet(key)

        if "wallet_data" in os.listdir():
            with open("wallet_data", "rb") as f:
                self.wallet_history = pickle.load(f)
            self.balance = int(fernet.decrypt(self.wallet_history["balance"]).decode())
        else:
            self.balance = 0.0
            self.save()

    def save(self):
        self.wallet_history["balance"] = fernet.encrypt(bytes(str(self.balance), "utf-8"))

        with open("wallet_data", "wb") as f:
            pickle.dump(wallet_history, f)

    def debit(self, price):
        if self.balance > price:
            print("Insufficient balance, try adding money !")
            return False
        else:
            self.balance -= price
            print("Payment successfully completed !")
            self.save()
            return True

    def credit(self, price):
        if price < 100:
            print("Minimum that can be added : Rs 100")
            return False
        else:
            print(f"Rs {price} added to wallet !")