numOfQuestions = int(input())
quest = []
answers = []
score = 0

for i in range(numOfQuestions):
    quest.append(input())
for i in range(numOfQuestions):
    answers.append(input())

for i in range(numOfQuestions):
    if quest[i] == answers[i]:
        score += 1
print(score)