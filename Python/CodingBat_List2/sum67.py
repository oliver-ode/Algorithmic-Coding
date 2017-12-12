def sum67(nums):
    noSixOrSevens = []
    insideSix = False
    for i in range(len(nums)):
        if nums[i] == 6:
            insideSix = True
        if not insideSix:
            noSixOrSevens.append(nums[i])
        if nums[i] == 7:
            insideSix = False
    return sum(noSixOrSevens)