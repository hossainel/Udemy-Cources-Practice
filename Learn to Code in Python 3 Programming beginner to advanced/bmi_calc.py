print("This program calculates your body mass index.")

weight = float ( input ( "Type your weight in KG (ex. 70.5): " ) )
height = float ( input ( "Type your height in Meters (ex. 1.70): " ) )

bmi = weight / (height ** 2)

print("Your BMI is: ", round (bmi,2) )

if (bmi<=18.5):
	classification = "Underweight"
elif (bmi > 18.5 and bmi <= 24.9):
	classification = "Normal weight"
elif (bmi > 24.9 and bmi <= 29.9):
	classification = "Over weight"
else:
	classification = "Obesity"

print ("The classification of your BMI is:", classification)
