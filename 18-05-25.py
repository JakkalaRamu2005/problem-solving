# Code Here
class Movie:
    def __init__(self,title,director, genre, rating, availability=True):
        self.__title = title
        self.__director = director
        self.__genre = genre
        self.__rating = rating
        self.__availability = availability
    def get_title(self):
        return self.__title
    def set_title(self,title):
        self.__title = title
    def get_director(self):
        return self.__director
    def set_director(self,director):
        self.__director = director
    def get_genre(self):
        return self.__genre
    def set_genre(self, genre):
        self.__genre = genre
    def get_rating(self):
        return self.__rating
    def set_rating(self, rating):
        if rating>0 and rating<=10:
            self.__rating = rating
        else:
            print("Invalid Rating")
    def check_availability(self):
        return self.__availability
    def screen_movie(self):
        if self.__availability:
            print(f"Movie is being screened: {self.__title} directed by {self.__director}")
            self.__availability = False 
        else:
            print(f"{self.__title} is already being screened.")
    def end_screening(self):
        self.__availability = True 
        print(f"Movie screening ended: {self.__title} directed by {self.__director}")
class Action(Movie):
    def __init__(self,title,director, genre, rating,action_type,stunts, availability=True):
        super().__init__(title,director, genre, rating, availability)
        self.__action_type = action_type
        self.__stunts = stunts
    def get_action_type(self):
        return self.__action_type
    def set_action_type(self, action_type):
        self.__action_type = action_type
    def get_stunts(self):
        return self.__stunts
    def set_stunts(self,stunts):
        self.__stunts = stunts
    
class Drama(Movie):
    def __init__(self,title,director, genre, rating,subgenre,actors,availability=True):
        super().__init__(title,director, genre, rating, availability)
        self.__subgenre = subgenre
        self.__actors = actors
    def get_subgenre(self):
        return self.__subgenre
    def set_subgenre(self, subgenre):
        self.__subgenre = subgenre
    def get_actors(self):
        return self.__actors
    def set_actors(self, actors):
        self.__actors = actors
    
class Comedy(Movie):
    def __init__(self,title,director, genre, rating, humor_type,audience_rating,availability=True):
        super().__init__(title,director, genre, rating, availability)
        self.__humor_type = humor_type
        self.__audience_rating = audience_rating
    def get_humor_type(self):
        return self.__humor_type
    def set_humor_type(self, humor_type):
        self.__humor_type = humor_type
    def get_audience_rating(self):
        return self.__audience_rating
    def set_audience_rating(self, audience_rating):
        self.__audience_rating = audience_rating

    
    
        