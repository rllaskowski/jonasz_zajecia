#!/usr/bin/python3

# Rozwiazanie zadania regaly

n = int(input())

# lista l zostanie wypelniona dlugosciami wczytanych regalow
l = []

for i in range(n):
    regal = input()
    l.append(len(regal))
    
# sorrtujemy dlugosci regalow
l.sort()

for i in l:
    # wypisujemy napis "O" tyle razy jaka jest dlugosc regalu
    print('O' * i)



