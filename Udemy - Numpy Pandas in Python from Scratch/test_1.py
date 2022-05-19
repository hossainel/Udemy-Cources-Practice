class UserData():
    age = 0
    name = None
    def __init__(self,name,age):
        self.name = name
        self.age = age
        
    def __str__(self):
        return "User name is : {} and has {} years old.".format(self.name,self.age)
    def __len__(self):
        return self.age

class PhoneNum(UserData):
    def __init__(self, name, age, num):
        super().__init__(name,age)
        self.num = num
        
user_1 = PhoneNum("Sara", 40, 123456)

print(user_1)

class Fruit:
    def __init__(self, season, color):
        self.season = season
        self.color = color

class Fruit_name:
    def __init__(self, name):
        self.name = name

class Citrus_Fruits(Fruit,Fruit_name):
    def __init__(self, season, color, name):
        Fruit.__init__(self, season, color)
        Fruit_name.__init__(self, name)
        
    def __repr__(self):
        return f'Citrus_Fruits({self.season, self.name, self.color})'

fruit_1 = Citrus_Fruits('Winter', 'Lemon', 'yellow')
print(Citrus_Fruits)
print(fruit_1)
