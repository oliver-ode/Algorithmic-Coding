import math
def radius(x1, y1, x2, y2):
    x = (x1-x2)**2
    y = (y1-y2)**2
    return(math.sqrt(x+y)/2)

numOfPoints = int(input())
points = []
maxDistance = 0
for i in range(numOfPoints):
    points.append(input().split())
    points[i][0] = int(points[i][0])
    points[i][1] = int(points[i][1])
for i in range(len(points)-1):
    for k in range(1, len(points)):
        if radius(points[i][0], points[i][1], points[k][0], points[k][1]) > maxDistance:
            maxDistance = radius(points[i][0], points[i][1], points[k][0], points[k][1])
print(maxDistance)