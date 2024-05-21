import json
x = '{"name":"hatem" , "age":210 , "job":"developer"}'
y = json.loads(x)
print(y["name"])
