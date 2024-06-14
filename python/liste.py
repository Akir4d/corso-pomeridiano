dizionario = {"nome" : "Pippa", "cognome": "Elkan", "Hobby": "Polveri bianche"}
print(dizionario.keys())
print(dizionario.values())

lista = [1, 2, 3]

x, y, *z = lista

for n in lista:
    print(n)

print(list(dizionario.items()))


for k, v in dizionario.items():
    print(f"{k}: {v}")

print(f"{dizionario['cognome']} {dizionario['nome']} {dizionario['Hobby']}")

lista = [1, 2, 3, 4, 5]
lista[2] = 33
_, _, x, _, _ = lista

lista.insert(0, 1)
lista.insert(3, 0)
lista.append("ciao")
x, y, *z  = lista

print(x, y, z)
