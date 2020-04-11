#!/usr/bin/python3

# Drugie rozwiazanie zadania wicemistrz korzstajace z sortowania list

n = int(input())
wejscie = input().split()

p = []

for i in wejscie:
    p.append(int(i))

# Uzywajac p.sort() sortujemy listę p w kolejnosci rosnacej

p.sort()

# Korzystamy z indeksu ujemnego: p[-1] to ostatni el. listy, p[-2] przed ostatni itp... 
print(p[-2])

