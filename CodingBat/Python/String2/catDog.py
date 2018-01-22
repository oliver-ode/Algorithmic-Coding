def cat_dog(str):
    catcount = str.count("cat")
    dogcount = str.count("dog")
    if catcount == dogcount:
        return True
    else:
        return False
