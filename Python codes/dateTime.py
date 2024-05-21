import datetime
x = datetime.datetime.now()
print("{}/{}/{}".format(x.day,x.month,x.year))
print("{}h{}".format(x.hour,x.minute))
print("{}:{}".format(x.second,x.microsecond))
