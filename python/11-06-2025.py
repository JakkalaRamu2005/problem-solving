class Patient:
    def __init__(self, name, age, medical_history=0):
        self.__name = name 
        self.__age = age 
        self.__medical_history = medical_history
    def display_info(self):
        print(f"Patient: {self.__name}, Age: {self.__age}, Medical History: {self.__medical_history}")
       
    def add_medical_condition(self, condition):
        self.__medical_history = condition
      

    # Getter methods for private attributes
    def get_name(self):
        return self.__name
        

    def get_age(self):
        return self.__age
        

    def get_medical_history(self):
        return self.__medical_history
       


class Outpatient(Patient):
    def __init__(self, name, age, appointment_time, medical_history=0):
        super().__init__(name,age,medical_history)
        self.__appointment_time = appointment_time


    def display_info(self):
        print(f"Patient: {self.get_name()}, Age: {self.get_age()}, Appointment Time: {self.__appointment_time}, Medical History: {self.get_medical_history()}")
    # Getter for appointment time
    def get_appointment_time(self):
        return self.__appointment_time


class Inpatient(Patient):
    def __init__(self, name, age, room_number, bed_type, medical_history=0):
        super().__init__(name,age,medical_history)
        self.__room_number = room_number
        self.__bed_type = bed_type
       

    def display_info(self):
        print(f"Patient: {self.get_name()}, Age: {self.get_age()}, Room: {self.__room_number}, Bed Type: {self.__bed_type}, Medical History: {self.get_medical_history()}")
        

    # Getter methods for room number and bed type
    def get_room_number(self):
        return self.__room_number
        

    def get_bed_type(self):
        return self.__bed_type
        
