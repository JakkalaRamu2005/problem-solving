# Code Here
# Railway Management System with Polymorphism
class Train:
    def __init__(self,train_id, train_name, base_fare):
        self.__train_id = train_id
        self.__train_name = train_name 
        self.__base_fare = base_fare
    def display_info(self):
        print(f"Train ID: {self.__train_id}, Train Name: {self.__train_name}, Base Fare: ${self.__base_fare}")
    def calculate_fare(self,passengers):
        return self.__base_fare * passengers
class ExpressTrain(Train):
    def __init__(self,train_id, train_name, base_fare,speed):
        super().__init__(train_id, train_name, base_fare)
        self.__speed = speed
    def calculate_fare(self,passengers):
        return super().calculate_fare(passengers)*1.5 
class LocalTrain(Train):
    def __init__(self,train_id, train_name, base_fare,stops):
        super().__init__(train_id, train_name, base_fare)
        self.__stops = stops
    def calculate_fare(self,passengers):
        return super().calculate_fare(passengers)*1.2 

        