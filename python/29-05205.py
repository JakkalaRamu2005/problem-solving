# Code Here
class Vechicle:
    def __init__(self,model,make,base_price):
        self.__model = model 
        self.__make = make 
        self.__base_price = base_price
    def display_info(self):
        print(f"Model: {self.__model}, Make: {self.__make}, Base Price: ${self.__base_price}")
    def calculate_rent(self):
        pass 
    
class Car:
    def __init__(self,model,make,base_price,air_conditioning):
        super().__init__(model,make,base_price)
        self.__air_conditioning = air_conditioning
    def calculate_rent(self):
        pass 
class Bike:
    def __init__(self,model,make,base_price,helmet_included):
        super().__init__(model,make,base_price)
        self.__helmet_included = helmet_included
    def calculate_rent(self):
        pass 
    
       
