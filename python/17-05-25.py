# Code Here
class Room:
    def __init__(self,room_number, room_type, price,availability=True):
        self.__room_number = room_number
        self.__room_type = room_type
        self.__price = price 
        self.__availability = availability 
    def get_room_number(self):
        return self.__room_number
    def set_room_number(self,room_number):
        self.__room_number = room_number
    def get_room_type(self):
        return self.__room_type
    def set_room_type(self,room_type):
        self.__room_type = room_type
    def get_price(self):
        return self.__price
    def set_price(self,price):
        if price>0:
            self.__price = price 
        else:
            print("Invalid price")
    def check_availability(self):
        return self.__availability
    def book_room(self):
        if self.__availability:
            print(f"Room {self.__room_number} is successfully booked.")
            self.__availability=False 
        else:
            print(f"Room {self.__room_number} is already booked.")
    def cancel_booking(self):
        if not self.__availability:
            print(f"Booking for room {self.__room_number} has been canceled.")
            self.__availability=True 
class SingleRoom(Room):
    def __init__(self,room_number, room_type, price,bed_type,floor_number,availability=True):
        super().__init__(room_number, room_type, price,availability)
        self.__bed_type = bed_type
        self.__floor_number = floor_number
    def get_bed_type(self):
        return self.__bed_type
    def set_bed_type(self,bed_type):
        self.__bed_type = bed_type
    def get_floor_number(self):
        return self.__floor_number
    def set_floor_number(self,floor_number):
        self.__floor_number = floor_number
class DoubleRoom(Room):
     def __init__(self,room_number, room_type, price,bed_type,has_balcony,availability=True):
        super().__init__(room_number, room_type, price,availability)
        self.__bed_type = bed_type
        self.__has_balcony = has_balcony
     def get_bed_type(self):
        return self.__bed_type
     def set_bed_type(self,bed_type):
        self.__bed_type = bed_type
     def check_balcony(self):
         return self.__has_balcony
     def set_balcony(self,has_balcony):
         self.__has_balcony = has_balcony
class Suite(Room):
    def __init__(self,room_number, room_type, price,amenities, room_size,availability=True):
         super().__init__(room_number, room_type, price,availability)
         self.__amenities = amenities
         self.__room_size = room_size
    def get_amenities(self):
        return self.__amenities
    def set_amenities(self,amenities):
        self.__amenities = amenities
    def get_room_size(self):
        return self.__room_size
    def set_room_size(self,room_size):
        self.__room_size = room_size
        
        
    
     
    



    
    
        
        
        