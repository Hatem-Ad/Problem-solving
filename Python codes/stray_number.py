def stray(arr):
    a = arr[0]
    i = 0
    r = 0
    for i in range(len(arr)):
        if arr[i] != a:
            b = arr[i]
    for i in range(len(arr)):
        if a == arr[i]:
            r+=1
    if r == 1:
        return a
    else:
        return b
