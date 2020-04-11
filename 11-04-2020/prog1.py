#!/usr/bin/python3

# 1 rozwiazanie zadania prog kwalifikacyjnt

n = int(input())
wejscie = input().split()

p = []

for i in wejscie:
    p.append(int(i))

p.sort()

q = int(input())

for i in range(q):
    ileZdobyc = int(input())


    # Zadania sa posortowane w kolejnosci rosnacej ich punktacji
    # to znaczy, ze najbardziej punktowane zadanie jest na ostatnim miejsu
    # listy. Korzystamy z INDEKSOWW UJEMNYCH: p[-1] to ostatni element listy, p[-2] to przedostatni itp...
   
    punkty = 0
    j = -1
    ileZrobilem = 0
    
    # Dopoki zdobylismy za malo punktow...
    while punkty < ileZdobyc:
        ileZrobilem += 1
        punkty += p[j]
        j -= 1

    print(ileZrobilem)
    