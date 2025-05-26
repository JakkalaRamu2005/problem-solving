# Code Hfr
from abc import ABC, abstractmethod 
class Vehicle(ABC):
    def __init__(self, vehicle_id, model, capacity):
        
        self.__vehicle_id = vehicle_id
        self.__model = model
        if self.__capacity<=0:
            print("Invalid Capacity")
        else:
            self.__capacity = capacity
    @abstractmethod
    def start_ride(self):
        pass 
    @abstractmethod
    def end_ride(self):
        pass 
    
class Car(Vehicle):
    def __init__(self, vehicle_id, model, capacity,fuel_type):
        super().__init__(vehicle_id, model, capacity)
        self.__fuel_type = fuel_type
    def start_ride(self):
        print(f"Car {self._Vehicle__vehicle_id}: Ride started with model {self._Vehicle__model}.")
    def end_ride(self):
        print(f"Car {self._Vehicle__vehicle_id}: Ride ended.")
class Bike(Vehicle):
    def __init__(self, vehicle_id, model, capacity,engine_capacity):
        super().__init__(vehicle_id, model, capacity)
        self.__engine_capacity = engine_capacity
    def start_ride(self):
        print(f"Bike {self._Vehicle__vehicle_id}: Ride started with model {self._Vehicle__model}.")
    def end_ride(self):
        print(f"Bike {self._Vehicle__vehicle_id}: Ride ended.")
    
