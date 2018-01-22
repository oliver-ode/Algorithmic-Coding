def max_end3(nums):
    first = nums[0]
    last = nums[2]
    if first >= last:
        return [first, first, first]
    elif last >= first:
        return [last, last, last]
