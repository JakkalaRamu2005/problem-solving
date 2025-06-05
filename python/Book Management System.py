class Book:
    def __init__(self, title, price):
       self.__title = title
       self.__price = price 

    def display_info(self):
        print(f"Book: {self.__title}, Price: ${self.__price}")

    def calculate_cost(self):
        return self.__price 

    # Getter methods for private attributes
    def get_title(self):
        return self.__title

    def get_price(self):
        return self.__price


class DiscountedBook(Book):
    def __init__(self, title, price, discount_percentage):
        super().__init__(title,price)
        self.__discount_percentage = discount_percentage

    def display_info(self):
        print(f"Book: {self._Book__title}, Price: ${self._Book__price:.2f}, Discount: {self.__discount_percentage}% off")

    def calculate_cost(self):
        return self._Book__price-(self._Book__price*self.__discount_percentage/100)

    # Getter for the discount percentage
    def get_discount_percentage(self):
        return self.__discount_percentage


class SpecialEditionBook(Book):
    def __init__(self, title, price, special_fee, is_signed):
        super().__init__(title,price)
        self.__special_fee = special_fee
        self.__is_signed = is_signed

    def display_info(self):
        print(f"Special Edition Book: {self._Book__title}, Price: ${self._Book__price:.2f}, Special Fee: ${self.__special_fee:.2f}, Signed: {self.__is_signed}")

    def calculate_cost(self):
        return self._Book__price + self.__special_fee

    # Getter methods for private attributes
    def get_special_fee(self):
        return self.__special_fee

    def get_is_signed(self):
        return self.__is_signed
