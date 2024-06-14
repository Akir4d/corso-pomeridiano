scelta = 0

while(scelta == 0):
    x = int(input("Inserisci un numero: "))
    y = int(input("Inserisci un altro numero: "))
    scelta = int(input("1-addizione\n2-sottrazione\n3-moltiplicazione\n4-esci\nScegli l'operazione: "))
    if (scelta == 1): print(f"{x} + {y} = {x+y}")
    elif (scelta == 2): print(f"{x} - {y} = {x-y}")
    elif (scelta == 3): print(f"{x} * {y} = {x*y}")
    else: print("esco")
    scelta = 0