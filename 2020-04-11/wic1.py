#!/usr/bin/python3

# Pierwsze rozwiazanie zadania wicemistrz korzstajace z znajdowania
# maksmalnego elementu listy oraz usuwania elementow z listy

n = int(input())
wejscie = input().split()

p = []

for i in wejscie:
    p.append(int(i))


# lista.remove(wartosc) usuwa pierwszy element o danej wartosci z listy
# [1, 3, 1, 2].remove(1) ----> [3, 1, 2]
# [5, 6, 6].remove(1) BLAD! 
p.remove(max(p))

# max/min(lista) zwraca najwieksza/najmniejsza wartosc z listy
print(max(p))
