def alarm_clock(day, vacation):
    if vacation:
        if day <= 5 and day != 0:
            return "10:00"
        return "off"
    if day <= 5 and day != 0:
        return "7:00"
    return "10:00"
