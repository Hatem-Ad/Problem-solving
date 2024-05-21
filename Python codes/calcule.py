nb1 = float(input("Donner le 1er nombre = "))
op = input("Donner l'operation (+,-,*,/) : ")
nb2 = float(input("Donner le 2eme nombre = "))
s = 0
z = True
e = True
if op != "+" and op != "-" and op !="*" and op !="/" :
    print("echec d'operation") 
    e=False

if (op == "+") :
    s = nb1 + nb2
elif (op == "-") :
    s = nb1 - nb2
elif (op == "*") :
    s = nb1 * nb2
elif (op == "/"):
    if (nb2 != 0):
        s = nb1 / nb2
    else:
        print("devision par 0 est impossible")
        z = False

if e==True and z==True:
    print("Le resultat = ",s)
