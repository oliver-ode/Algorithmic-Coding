lv1 = int(input())
lv2 = int(input())
lv3 = int(input())
lv4 = int(input())

if lv1 < lv2 and lv2 < lv3 and lv3 < lv4:
    print("Fish Rising")
elif lv1 > lv2 and lv2 > lv3 and lv3 > lv4:
    print("Fish Diving")
elif lv1 == lv2 and lv1 == lv3 and lv1 == lv4:
    print("Fish At Constant Depth")
else:
    print("No Fish")