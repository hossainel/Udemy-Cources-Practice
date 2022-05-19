import random
guess_list = ['Almond', 'Banana', 'Blewits', 'Carrot', 'Cashew', 'Celery', 'Cherry', 'Chives', 'Chocho', 'Citron', 'Citrus', 'Cobnut', 'Cooker', 'Daikon', 'Damson', 'Endive', 'Fennel', 'Garlic', 'Girkin', 'Greens', 'Kiwano', 'Lentil', 'Lichee', 'Lychee', 'Marrow', 'Medlar', 'Nettle', 'Orange', 'Oyster', 'Papaya', 'Pawpaw', 'Peanut', 'Pepper', 'Pignut', 'Pippin', 'Potato', 'Quince', 'Radish', 'Raisin', 'Rocket', 'Russet', 'Squash', 'Tomato', 'Turnip', 'Wakeme', 'Walnut']

lives = ['''
  ________
   |     \|
   O      |
  /|\     |
  / \     |
          |
 ==========
''','''
  ________
   |     \|
   O      |
  /|\     |
    \     |
          |
 ==========
''','''
  ________
   |     \|
   O      |
  /|\     |
          |
          |
 ==========
''','''
  ________
   |     \|
   O      |
   |\     |
          |
          |
 ==========
''','''
  ________
   |     \|
   O      |
   |      |
          |
          |
 ==========
''','''
  ________
   |     \|
   O      |
          |
          |
          |
 ==========
''','''
  ________
   |     \|
          |
          |
          |
          |
 ==========
''']

game_name = '\
 _\n\
| |\n\
| |___    __ _     __ __    __ _   ____ ____    __ _     __ __  \n\
|  _  |  / _  |   |  _  \  / _  | |  _   _  \  / _  |   |  _  \ \n\
| | | | | (_| |_  | | | | | (_| | | | | | | | | (_| |_  | | | | \n\
|_| |_|  \______| |_| |_|  \___ | |_| |_| |_|  \______| |_| |_| \n\
                            __/ |\n\
                           |___/ \n\
'

guessing_word = random.choice(guess_list).lower()
word_letters = len(guessing_word)
game_over = False
tries = 6

print(game_name)

print(f'The word you guessed is {guessing_word}')

result = []

for _ in range(word_letters):
    result +='_'
    
while not game_over:
    user_guessing = input('Guess a letter: ')
    if user_guessing in result:
        print(f'The letter you have guessed is {user_guessing}')
    for position in range(word_letters):
        letter = guessing_word[position]
        if letter == user_guessing:
            result[position] = letter
    if user_guessing not in guessing_word:
        print(f'You guessed {user_guessing}, this letter is not in the word, you lose a try.')
        tries -= 1
    if tries == 0:
        game_over = True
        print(' Game over, you lose the game, try again later.')
    print(f"{' '.join(result)}")
    if not '_' in result:
        game_over = True
        print('You are a winner. Congratulations!')
    print(lives[tries])
