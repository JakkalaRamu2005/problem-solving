# Code Hfr
from abc import ABC, abstractmethod 
class Vehicle(ABC):
    def __init__(self, vehicle_id, model, capacity):
        self._capacity = capacity
        self._vehicle_id = vehicle_id
        self._model = model
        if self.__capacity<=0:
            print("Invalid Capacity")
    @abstractmethod
    def start_ride(self):
        pass 
    @abstractmethod
    def end_ride(self):
        pass 
    
class Car(Vehicle):
    def __init__(self, vehicle_id, model, capacity,fuel_type):
        super().__init__(vehicle_id, model, capacity)
        self._fuel_type = fuel_type
    def start_ride(self):
        print(f"Car {self._vehicle_id}: Ride started with model {self._model}.")
    def end_ride(self):
        print(f"Car {self._vehicle_id}: Ride ended.")
class Bike(Vehicle):
    def __init__(self, vehicle_id, model, capacity,engine_capacity):
        super().__init__(vehicle_id, model, capacity)
        self._engine_capacity = engine_capacity
    def start_ride(self):
        print(f"Bike {self._vehicle_id}: Ride started with model {self._model}.")
    def end_ride(self):
        print(f"Bike {self._vehicle_id}: Ride ended.")
    