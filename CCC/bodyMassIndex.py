weight = float(input())
height = float(input())
bmi = weight/(height*height)
if bmi > 25:
    print("Overweight")
elif bmi >= 18.5 and bmi <= 25:
    print("Normal weight")
elif bmi < 18.5:
    print("Underweight")