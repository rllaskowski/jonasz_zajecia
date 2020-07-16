#!/usr/bin/python3

# Rozwiązanie zadania oceny

n = int(input())
x = input().split()

# Tworzymy tablicę z licznikami wystąpien kazdej z ocen
licznik = [0]*6

for i in x:
    i = int(i)

    licznik[i-1] += 1

# Licznik[x-1] to ilosc wystepowan oceny x. Np licznik[3] to liczba ocen 4
# Odejmujemy 1 od oceny ponieważ tablica o wielkosci 6 ma indeksy od 0 do 5
# a nasze oceny są od 1 do 6

for i in licznik:
    print(i, end=' ')