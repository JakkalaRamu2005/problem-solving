# Code Hered
class Vehicle:
    def __init__(self, model, make, price):
        self.__model = model
        self.__make = make 
        self.__price = price 
    def display_info(self):
        print(f"Model: {self.__model}, Make: {self.__make}, Price: ${self.__price:.2f}")

class Car(Vehicle):
    def __init__(self,model,make,price):
        super().__init__(model,make,price)
    def display_info(self):
        print(f"Model: {self._Vehicle__model}, Make: {self._Vehicle__make}, Total Price: ${self._Vehicle__price+500:.2f}")

class Bike(Vehicle):
    def __init__(self,model,make,price):
        super().__init__(model,make,price)
    def display_info(self):
        print(f"Model: {self._Vehicle__model}, Make: {self._Vehicle__make}, Total Price: ${self._Vehicle__price+150:.2f}")
    
