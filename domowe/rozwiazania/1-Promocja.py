#!/usr/bin/python3

# Rozwiązanie zadania promocja

def promocja(n):
    ncena = int(n[1]) * (1 - int(n[0]) / 100)
    return ncena

n = input().split()

# Wczytane napisy zamieniamy na liczby calkowite
n[0] = int(n[0])
n[1] = int(n[1])

# Poniewaz zwrocony przez funkcje promocja wynik jest liczba niecalkowita, 
# nalezy zamienic go na liczbe calkowita przed wypisaniem
print(int(promocja(n)))