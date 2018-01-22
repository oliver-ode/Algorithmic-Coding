t = int(input())
s = int(input())
h = int(input())

for k in range(t):
   print ("*" + " "*s + "*" + " "*s + "*")
print ("*" * (3 + s * 2))
for k in range(h):
    print (" " * (s + 1) + "*")
    