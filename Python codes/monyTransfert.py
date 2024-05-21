nb=float(input("Combient d'euro :"))
print("En un {} £ !".format(nb))
print("*******")
print("Transfort en :")
print("1-Dollar")
print("2-Dinar")
print("3-Yan")
print("*******")

choix=int(input("Choix :"))
if choix == 1 :
	recu=nb*1.65
	print("*******")
	print("Le montant sera {} Dollars ! ".format(recu))
elif choix == 2 :
	recu=nb*2.76
	print("*******")
	print("Le montant sera {} Dinars ! ".format(recu))
elif choix == 3:
	recu=nb*47
	print("*******")
	print("Le montant sera {} Yan ! ".format(recu))
else:
	print("erreur de choix !")

