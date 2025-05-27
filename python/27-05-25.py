# Cricket Management System with Polymorphism -- Question Name From forgith night Test

# Code Here
class Player:
    def __init__(self,name,age,team,base_score):
        self.__name = name 
        self.__age = age 
        self.__team = team 
        self.__base_score = base_score
    def display_info(self):
        print(f"Name: {self.__name}, Age: {self.__age}, Team: {self.__team}, Base Score: {self.__base_score}")
    def get_base_score(self):
        return self.__base_score
    def calculate_performance_score(self):
        return self.__base_score 
class Batsman(Player):
    def __init__(self,name,age,team,base_score,runs_scored):
        super().__init__(name,age,team,base_score)
        self.__runs_scored = runs_scored
    def calculate_performance_score(self):
        return self.get_base_score() + (self.__runs_scored*0.5) 
class Bowler(Player):
    def __init__(self,name,age,team,base_score,wickets_taken):
        super().__init__(name,age,team,base_score)
        self.__wickets_taken = wickets_taken
    def calculate_performance_score(self):
        return  self.get_base_score() + (self.__wickets_taken*2)   

