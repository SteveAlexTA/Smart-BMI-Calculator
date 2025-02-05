import math
weight = float(input())
height = float(input())

print("Enter your weight: ")
print("Enter your height") 

bmi = weight / pow(height, height)

if bmi <= 18.4:
    print("Your BMI is: " + str(bmi))
    print("You are underweight.")
elif bmi >= 18.5 and bmi <= 24.9:
    print("Your BMI is: " + str(bmi))
    print("You are fit.")
elif bmi >= 25 and bmi <= 39.9:
    print("Your BMI is: " + str(bmi))
    print("You are slightly overweight.")
elif bmi >= 40:
    print("Your BMI is: " + str(bmi))
    print("You are obessed.")
else:
    print("Invalid")
