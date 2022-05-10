from matplotlib import pyplot as plt
import time as t

times = []

mistakes = 0

print("This program will help py type faster. You will have to type the word 'Programming'  as fast as you can for five times.")
input("Press Enter to start")

while len(times) < 5:
    start = t.time()
    word = input("Type the word: ")
    end = t.time()
    time_elapsed = end - start
    times.append(time_elapsed)
    
    if not (word.lower() == "programming"): mistakes += 1;
    
print ("You made %i mistake(s)."%mistakes)
print("Let's see the evolution")

t.sleep(3)

x = [1,2,3,4,5]

y = times

plt.plot(x,y)
legend = ['1','2','3','4','5']
plt.xticks(x, legend)
plt.ylabel('Time in seconds')
plt.xlabel('Attempts')
plt.title('Your typinh evolution')
plt.show()
