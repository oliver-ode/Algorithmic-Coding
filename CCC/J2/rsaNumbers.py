from_num = int(input())
to_num = int(input())
counter = 0
store = 0
RSA_Numbers = 0

for i in range(from_num, to_num + 1):
    counter = 0
    for l in range(1, i + 1):
        store = i % l
        if store == 0:
            counter += 1
    if counter == 4:
        RSA_Numbers += 1

print("The number of RSA numbers between", from_num, "and", to_num, "is", RSA_Numbers)