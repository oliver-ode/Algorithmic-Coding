def parrot_trouble(talking, hour):
    if talking == False and hour == 6:
        return False
    elif hour < 7 or hour > 20 and talking == True:
        return True
    return False