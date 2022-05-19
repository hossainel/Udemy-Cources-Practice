class Fruit:
    def __init__(self, fruits):
        self.fruits = fruits
        
    def __repr__(self):
        return f'Fruit({self.fruits})'
    @classmethod
    def citrus(cls):
        return cls(['lemon','orange','tangerine'])
    @classmethod
    def grapes(cls):
        return cls(['green grapes', 'red grapes'])
    @staticmethod
    def season():
        return 'Citrus Fruits in winter, Grapes Fruits in summer.'


print(Fruit.citrus())
print(Fruit.grapes())
print(Fruit.season())
