def string_match(a, b):
    lengths = [len(a), len(b)]
    lengths.sort()
    count = 0
    for i in range(lengths[0]-1):
        if a[i:i+2] == b[i:i+2]:
            count += 1
    return count