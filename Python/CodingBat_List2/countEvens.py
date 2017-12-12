def count_evens(nums):
    even = 0
    for i in range(len(nums)):
        if nums[i] == 0 or nums[i] == 2 or nums[i] == 4 or nums[i] == 6 or nums[i] == 8 or nums[i] == 10 or nums[i] == 12 or nums[i] == 14 or nums[i] == 16:
            even += 1
    return even
