import json
import pickle
import os
from datetime import datetime

def fare(src, dest, adult, child):
    src = src.upper()
    dest = dest.upper()

    child /= 2

    with open("station_filtered.json", "r") as f:
        station = json.load(f)

    if (src in station.keys() and dest in station.keys()) and (station[src]["coordinates"] is not None and station[dest]["coordinates"] is not None):

        distance = (station[src]["coordinates"][0] - station[dest]["coordinates"][0])**2 + (station[src]["coordinates"][1] - station[dest]["coordinates"][1])**2
        fareCost = 10 + (distance * 15.641993980131867)
        
        fareCost = round(fareCost/10)*10

        fareCost *= (child + adult)
    
        return True, round(fareCost)
    
    else:
        return False, 0

def book(src, dest, adult, child):
    found, fare = fare(src, dest, 1, 1)

    time_obj = datetime.now()
    time = time_obj.strftime("%H:%M:%S")
    date = time_obj.strftime("%d-%b-%Y")

    if ("ticket_data" in os.listdir()):
        with open("ticket_data", "rb") as f:
            tickets = pickle.load(f)
    else:
        tickets = dict()    
    
    found, fare = fare(src, dest, adult, child)

    if found:

        tickets[time_obj] : {
            "time" : time,
            "date" : date,
            "source" : src,
            "destination" : dest,
            "valid" : True,
            "fare" : fare,
            "adult" : adult,
            "child" : child
        }

        with open("ticket_data", "wb") as f:
            pickle.dump(tickets, f)
        # print(f"Fare is {fare}")
    else:
        print("\nStation not found\n")

if __name__ == "__main__":
    src = input("Enter source station : ")
    dest = input("Enter destination station : ")
    
    found, fare = fare(src, dest, 1, 1)

    if found:
        print(f"Fare is {fare}")
    else:
        print("Station not found")