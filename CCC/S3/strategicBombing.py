roads = []
road = input()
roadsCopy = []
goodRoadsToBomb = []
available = ["A"]
possibilities = []
taken = []
specialRoad = ""
route = 0

while road != "**":
    roads.append(road)
    road = input()

for i in range(0, len(roads)):
    roadsCopy = roads[:]
    specialRoad = roadsCopy[i]
    roadsCopy.pop(i)
    #Prims algorithm code starts here
    while True:
        for i in range(len(roadsCopy)-1, -1, -1):
            if roadsCopy[i][0] in available or roadsCopy[i][1] in available:
                possibilities.append(roadsCopy[i])
                roadsCopy.pop(i)
        if len(possibilities) == 0:
            break
        if possibilities[route][1] not in available:
            available.append(possibilities[route][1])
            taken.append(possibilities[route])
        elif possibilities[route][0] not in available:
            available.append(possibilities[route][0])
            taken.append(possibilities[route])
        possibilities.pop(route)
    if "B" not in available:
        goodRoadsToBomb.append(specialRoad)
    taken = []
    route = 0
    possibilities = []
    available = ["A"]

for i in range(len(goodRoadsToBomb)):
    print(goodRoadsToBomb[i])

print("There are", len(goodRoadsToBomb), "disconnecting roads.")