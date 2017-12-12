speedLimit = int(input())
speed = int(input())
if speed <= speedLimit:
    print("Congratulations, you are within the speed limit!")
elif speed > speedLimit and speed <= speedLimit + 20:
    print("You are speeding and your fine is $100.")
elif speed > speedLimit and speed <= speedLimit + 30:
    print("You are speeding and your fine is $270.")
else:
    print("You are speeding and your fine is $500.")