#!/usr/bin/python3

# Rozwiazanie zadania akcelerator korzystajace ze slownikow

# slownik posiada klucze, do ktorych przypisywane są wartosci
# slownik = {}   <-- tworzenie nowego slownka

# n - ilosc czasteczek na wejsciu
n = int(input())

# lista predkosci poszczegolnych czastek
predkosci = input().split()

# W tym slowniku chcemy trzymac ile razy wystepowala
# dana predkosc w liscie predkosci
# Np. jesli ileRazy['3'] == 10 to znaczy ze '3' wystepowalo 10 razy
ileRazy = {}

# Przechodzimy po calej liscie predkosci czastek
for predkosc in predkosci:
    # nalezy sprawdzic czy dany klucz jest 
    # w slowniku zanim sie do niego odniesiemy!!!
    # jesli '123' nie jest kluczem w slowniku a się do niego
    # odniesiemy, to wyskoczy blad!!
    if predkosc in ileRazy:
        # Juz kiedys spotkalismy te predkosc, dodajmy jeden do ilosci wystepowan
        ileRazy[predkosc] += 1
    else:
        # Jeszcze nie ma tej predkosci w slowniku, ustawmy ze wystepuje dokladnie raz
        ileRazy[predkosc] = 1

# ilosc testow na wejsciu
testy = int(input())

for i in range(testy):
    pytanie = input()

    # Czy ta wartosc jest klluczem w naszym slowniku?
    # (inaczej mowiac - czy wczytalismy kieds predkosc o tej wartosci?)
    if pytanie in ileRazy:
        # Jesli tak - w slowniku mamy zapisane ile razy ta predkosc
        # wystepowala
        print(ileRazy[pytanie])
    else:
        print('0')