class Student:
    def __init__(self, name, roll_number, grade, courses):
        self.__name = name 
        self.__roll_number = roll_number
        self.__grade = grade
        self.__courses = courses
    def get_name(self):
        return self.__name 
    def set_name(self,name):
        self.__name = name 
    def get_roll_number(self):
        return self.__roll_number
    def get_grade(self):
        return self.__grade 
    def set_grade(self, grade):
        if grade>0 and grade<=100:
            self.__grade = grade
        else:
            print("Invalid Grade")
    def get_courses(self):
        pass 
    def add_courses(self, course):
        self.__courses.append(course)
    def remove_course(self, course):
        if course in self.__courses:
            self.__courses.remove(course)
    def display_info(self):
        if len(self.__courses)==0:
            print("No courses enrolled")
        else:
            print(f"Student {self.__roll_number}: {self.__name}, Grade: {self.__grade}, Courses: {self.__courses}")
class GraduateStudent(Student):
    def __init__(self, name, roll_number,thesis_title, grade, courses):
        super().__init__(name, roll_number, grade, courses)
        self.__thesis_title = thesis_title 
    def get_thesis_title(self):
        return self.__thesis_title
    def set_thesis_title(self,title):
        self.__thesis_title = title
    def display_info(self):
        print(f"Graduate Student {self.__roll_number}: {self.__name}, Grade: {self.__grade}, Thesis: {self.__thesis_title}, Courses: {self.__courses}")
        
    
        