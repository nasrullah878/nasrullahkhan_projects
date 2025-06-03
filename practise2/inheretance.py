class Animal:
    def show(self):
        print("this is base class")

class Dog(Animal):
    def show(self):
        print("this is derived class")

    def show1(self):
        print("this is derived class extra method")

# main equivalent
if __name__ == "__main__":
    a = Animal()
    d = Dog()

    a.show()    # prints: this is base class
    d.show()    # prints: this is derived class (overridden method)
    d.show1()   # prints: this is derived class extra method
