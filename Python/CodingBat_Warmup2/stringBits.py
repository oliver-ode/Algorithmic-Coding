def string_bits(str):
    output = ""
    for i in range(0, len(str), 2):
        output += str[i]
    return output
