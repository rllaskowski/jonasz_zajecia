#!/usr/bin/python3

# Zwraca True jeśli liczba podana w argumencie jest pierwsza
# lub False w przeciwnym przypadku 
def czyPierwsza(liczba):
    d = 2

    # Okazuje się, że jeśli liczba jest złożona, to istnieje dzielnik
    # mniejszy lub równy od pierwiastka z tej liczby.
    # W przypadku gdy takiego dzielnika nie ma, możemy stwierdzić, że liczba jest
    # pierwsza. 
    while d*d <= liczba:    # Jest to inny zapis nierówności: i <= sqrt(liczba)
        if liczba % d == 0: # Czy d dzieli liczbę? 
            return False    # Jeśli tak - znaleźliśmy dzielnik. Liczba nie jest pierwsza
        d += 1
    return True             # Nie znaleźlismy żadnego dzielnika, więc liczba jest pierwsza

N = 100000

# Tworzymy tablicę rozmiaru N na początku wypelnioną False
pierwsza = [False]*N        

for i in range(2, N):
    # Od teraz w tablicy pierwsza[i] znajduje się True tylko jesli i jest liczbą pierwszą
    # np pierwsza[7] == True, ale pierwsza[12] == False
    pierwsza[i] = czyPierwsza(i)    


# Zwwraca sumę liczb pierwszych na przedziale [a, b]
def sumaPierwszych(a, b):
    # na poczatku suma = 0
    suma = 0

    # Przechodzimy po przedziale [a, b]
    for i in range(a, b+1):
        if pierwsza[i] == True: # Czy i jest liczbą pierwszą?
            suma += i           # Jeśli tak - zwiększ sumę

    return suma


# wczytujemy ilosc testów do wykonania
T = int(input())

for i in range(T):
    wejscie = input().split()   

    # a, b - poczatek i koniec przedzialu
    a = int(wejscie[0])
    b = int(wejscie[1])

    print(sumaPierwszych(a, b))
            