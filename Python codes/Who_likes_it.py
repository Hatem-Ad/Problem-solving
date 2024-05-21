def likes(names):
    a = len(names) - 2
    w = ""
    if names == []:
        w = "no one likes this"
    elif names != "" and len(names) == 1:
        for i in range(len(names)):
            w = w + names[i] + ", "
        w = w[0:-2]
        w = w + " likes this"
    elif  names != "" and len(names) == 2:
        for i in range(len(names)):
            w = w + names[i] + " and "
        w = w[0:-4]
        w = w + "like this"
    elif  names != "" and len(names) == 3:
        for i in range(2):
            w = w + names[i] + ", "
        w = w[0:-2] + " and " + names[2]
        w = w + " like this"
    elif  names != "" and len(names) > 3:
        for i in range(2):
            w = w + names[i] + ", "
        w = w[0:-2] + " and {}".format(a)
        w = w + " others like this"
    return w
