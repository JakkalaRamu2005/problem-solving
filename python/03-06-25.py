# Code Here
class Vehicle:
    def __init__(self,make,model,year):
        self.__make = make
        self.__model = model 
        self.__year = year 
    def get_make(self):
        return self.__make 
    def set_make(self,make):
        self.__make = make 
    def get_model(self):
        return self.__model
    def set_mode(self,model):
        self.__model = model
    def get_year(self):
        return self.__year 
    def set_year(self,year):
        if year<1886:
            print("Invalid Year")
        else:
            self.__year = year 
    def display_info(self):
        print(f"Vehicle: {self.__make} {self.__model}, Year: {self.__year}")

class Car(Vehicle):
    def __init__(self,make,model,year,num_doors,fuel_type):
        super().__init__(make,model,year)
        self.__num_doors = num_doors
        self.__fuel_type = fuel_type
    def get_num_doors(self):
        return self.__num_doors
    def set_num_doors(self,num_doors):
        if num_doors<0:
            print("Invalid Number of Doors")
        else:
            self.__num_doors = num_doors
    def get_fuel_type(self):
        return self.__fuel_type
    def set_fuel_type(self,fuel_type):
        self.__fuel_type = fuel_type
    def display_info(self):
        print(f"Car: {self._Vehicle__make} {self._Vehicle__model}, Year: {self._Vehicle__year}, Doors: {self.__num_doors}, Fuel: {self.__fuel_type}")
class Motorcycle(Vehicle):
    def __init__(self,make,model,year,engine_capacity,type):
        super().__init__(make,model,year)
        self.__engine_capacity = engine_capacity
        self.__type = type 
    def get_engine_capacity(self):
        return self.__engine_capacity
    def set_engine_capacity(self,engine_capacity):
        if engine_capacity<0:
            print("Invalid Engine Capacity")
        else:
            self.__engine_capacity = engine_capacity
    def get_type(self):
        return self.__type 
    def set_type(self,motorcycle_type):
        self.__motorcyle_type = motorcycle_type
    def display_info(self):
        print(f"Motorcycle: {self._Vehicle__make} {self._Vehicle__model}, Year: {self._Vehicle__year}, Engine: {self.__engine_capacity}cc, Type: {self.__type}")
