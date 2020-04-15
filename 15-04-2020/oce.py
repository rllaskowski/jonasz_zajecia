#!/usr/bin/python3


n = int(input())
x = input().split()

# print(x)

licznik = [0]*6

for i in x:
    i = int(i)

    licznik[i-1] += 1

# na indeksie x w tablicy licznik, jest ilosc wystepowan oceny x+1. Np licznik[3] to liczba ocen 4

for i in licznik:
    print(i, end=' ')