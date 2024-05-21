def divisors(integer):
    nums = []
    r = "{} is prime".format(integer)
    for i in range(2,int(integer / 2) + 1):
        if integer % i == 0:
            nums.append(i)
    if len(nums) > 0 :
        return print(nums)
    else:
        return print(r)
integer = int(input("integr : "))
divisors(integer)
