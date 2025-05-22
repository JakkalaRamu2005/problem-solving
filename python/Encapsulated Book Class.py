# Code Here
class Book:
    def __init__(self, title, author, isbn, price):
        self.__title = title
        self.__author = author
        self.__isbn = isbn 
        self.__price = price 
    def get_title(self):
        return self.__title
    def set_title(self, title):
        self.__title = title
    def get_author(self):
        return self.__author
    def get_isbn(self):
        return self.__isbn
    def get_price(self):
        return self.__price 
    def set_price(self, price):
        if price<0:
            print("Invalid Price")
        else:
            self.__price = price 
    def display_info(self):
        print(f"Book {self.__isbn}: {self.__title} by {self.__author}, Price: ${self.__price}")
        