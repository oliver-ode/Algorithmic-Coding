def make_chocolate(small, big, goal):
    if goal >= big * 5:
        left = goal - big * 5
    else:
        left = goal % 5
    if left <= small:
        return left
    return -1