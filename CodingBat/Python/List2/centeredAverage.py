def centered_average(nums):
    sum = 0
    for i in range(len(nums)):
        sum += nums[i]
    return (sum- min(nums) - max(nums)) / (len(nums)-2) 