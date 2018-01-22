def sum2(nums):
    try:
        return nums[0] + nums[1]
    except:
        try:
            return nums[0]
        except:
            return 0
