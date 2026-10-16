class Libray:
    def __init__(self, name, shelf_num, price):
        self.name = name
        self.shelf_num = shelf_num
        self.price = price

    @staticmethod
    def new_book_news():
        print("Tomorrow ,  will add new book ")


book_1 = Libray("Bangle", 43, 500)
print(f"Book name is : {book_1.name} , self number is :  {book_1.shelf_num} , This book price {book_1.price}")
Libray.new_book_news()