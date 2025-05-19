# Code Here
class Employee:
    def __init__(self,employee_id,name,age,department,salary):
        self.__employee_id = employee_id
        self.__name = name
        self.__age = age
        self.__department = department
        self.__salary = salary
    def get_employee_id(self):
        return self.__employee_id
    def set_employee_id(self, employee_id):
        self.__employee_id = employee_id
    def get_name(self):
        return self.__name 
    def set_name(self,name):
        self.__name = name 
    def get_age(self):
        return self.__age 
    def set_age(self,age):
        self.__age = age 
    def get_department(self):
        return self.__department
    def set_department(self,department):
        self.__department = department
    def get_salary(self):
        return self.__salary
    def set_salary(self,salary):
        if salary>0:
            self.__salary=salary
        else:
            print("Invalid salary")
    def get_bonus(self):
        return self.__salary*10/100
    def increase_salary(self,amount):
        self.__salary+=amount 
class Manager(Employee):
    def __init__(self,employee_id,name,age,department,salary,team_size,budget):
        super().__init__(employee_id,name,age,department,salary)
        self.__team_size = team_size
        self.__budget = budget
    def get_team_size(self):
        return self.__team_size
    def set_team_size(self, team_size):
        self.__team_size = team_size
    def get_budget(self):
        return self.__budget
    def set_budget(self,budget):
        self.__budget = budget
class Developer(Employee):
    def __init__(self,employee_id,name,age,department,salary,programming_languages,projects_assigned):
        super().__init__(employee_id,name,age,department,salary)
        self.__programming_languages = programming_languages
        self.__projects_assigned = projects_assigned
    def get_programming_languages(self):
        return self.__programming_languages
    def set_progamming_languages(self,languages):
        self.__programming_languages = languages
    def get_projects_assigned(self):
        return self.__projects_assigned
    def set_projects_assigned(self,projects):
        self.__projects = projects
class Intern(Employee):
    def __init__(self,employee_id,name,age,department,salary,duration,mentor):
        super().__init__(employee_id,name,age,department,salary)
        self.__duration = duration 
        self.__mentor = mentor
    def get_duration(self):
        return self.__duration 
    def set_duration(self,duration):
        self.__duration = duration
    def get_mentor(self):
        return self.__mentor
    def set_mentor(self,mentor):
        self.__mentor = mentor
    
