import os 
ch1=input("Donner ch1 :")
ch2=input("Donner ch2 :")
found = 0
t1 = int(len(ch1))
print("t1 = ",t1)
t2 = int(len(ch2))
print("t2 = ",t2)
for i in range(t1):
	print("**********")
	print("ch1[",i,"] = ",ch1[i])
	print("**********")
	for j in range(t2):
		if ch1[i] == ch2[j] :
			            print("ch2[",j,"] : ",ch2[j]," égale à ch1[",i,"] : ", ch1[i])
			            found+=1
			            print("Found = ",found)
			            break
		else:
			print("ch2[",j,"] : ",ch2[j]," different à ch1[",i,"] : ", ch1[i])
if ((found==t1) or (found==t2)):
	print("Les deux mots ont les même lettres. ")
else:
	print("Les deux mots n'ont pas des même lettres. ")

os.system("pause")
