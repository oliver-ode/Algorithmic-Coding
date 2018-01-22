def array_front9(nums):
    try:
        if nums.index(9) <= 3:
            return True
        return False
    except:
        return False