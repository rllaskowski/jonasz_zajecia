#!/usr/bin/python3


wejscie = input().split()

n = int(wejscie[0])
x = int(wejscie[1])

wejscie = input().split()

# lista bedzie zawierac pozycje na ktorych wystepuje liczba x
lista = []

for i in range(n):
    liczba = int(wejscie[i])
    if liczba == x:
        lista.append(i + 1)

if len(lista) > 0: 
    print(lista[0], lista[-1])
else:
    print("-1 -1")
