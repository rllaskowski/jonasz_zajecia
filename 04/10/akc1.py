#!/usr/bin/python3

# Rozwiazanie pierwsze zadania akcelerator
# Przechodzimy po liscie obliczajac ilosc wystapien danego

n = int(input())
predkosci = input().split()

testy = int(input())

for i in range(testy):
    pytanie = input()

    licznik = 0

    # Przechodzimy po calej liscie od poczatku do konca
    for j in predkosci:
        # Jesli znalezlismy oczekiwana wartosc - dodajemy 1 do licznika
        if j == pytanie:
            licznik += 1
            
    print(licznik)          
    
