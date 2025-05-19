# Code Here
class Book:
    def __init__(self, title, author, isbn, availability=True):
        self.__title = title 
        self.__author = author
        self.__isbn = isbn
        self.__availability = availability
    def get_title(self):
        return self.__title
    def set_title(self, title):
        self.__title = title
    def get_author(self):
        return self.__author
    def set_author(self,author):
        self.__author = author
    def get_isbn(self):
        return self.__isbn 
    def set_isbn(self,isbn):
        self.__isbn = isbn
    def check_availability(self):
        return self.__availability
    def borrow_book(self):
        if self.__availability:
            print(f"Book Borrowed: {self.__title} by {self.__author} ")
            self.__availability = False
        else:
            print(f"{self.__title} is already borrowed.")
    def return_book(self):
        self.__availability=True
        print(f"Book Returned: {self.__title} by {self.__author}")
class Fiction(Book):
    def __init__(self, title, author, isbn,genre,rating, availability=True):
        super().__init__(title, author, isbn, availability)
        self.__genre = genre
        self.__rating = rating
    def get_genre(self):
        return self.__genre
    def set_genre(self, genre):
        self.__genre = genre
    def get_rating(self):
        return self.__rating
    def set_rating(self,rating):
        if rating>=1 and rating<=5:
            self.__rating = rating
        else:
            print("Invalid Rating")
class NonFiction(Book):
    def __init__(self, title, author, isbn,subject,publisher, availability=True):
        super().__init__(title, author, isbn, availability)
        self.__subject = subject
        self.__publisher = publisher
    def get_subject(self):
        return self.__subject
    def set_subject(self,subject):
        self.__subject = subject
    def get_publisher(self):
        return self.__publisher
    def set_publisher(self,publisher):
        self.__publisher = publisher
class Textbook(Book):
    def __init__(self, title, author,isbn,course,edition, availability=True):
        super().__init__(title, author, isbn, availability)
        self.__course = course 
        self.__edition = edition
    def get_course(self):
        return self.__course
    def set_course(self,course):
        self.__course = course 
    def get_edition(self):
        return self.__edition
    def set_edition(self,edition):
        self.__edition = edition
        
        
    
    
    
