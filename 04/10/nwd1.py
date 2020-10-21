#!/usr/bin/python3

# Rowiazanie 1 zadania NWD

# Zwraca True jesli dzielnik dzieli kazda liczbe z listy
# albo false w przeciwnym przypadku
def czyDzielnik(lista, dzielnik):
    for i in lista:
        if i % dzielnik != 0:
            return False
    return True


# Zwraca największy wspolny dzielnik liczb z listy
def NWD(lista):
    # NWD liczb nie jest wieksze niz najmniejsza z tych liczbs
    dzielnik = min(lista)

    while dzielnik > 0:
        # czy ten dzielnik dzieli kazdą liczbę z listy?
        if czyDzielnik(lista, dzielnik) == True:
            return dzielnik
        
        # Szukamy dalej
        dzielnik -= 1


# n - ilosc liczb podanych w nastepnym wierszu
n = int(input())

wejscie = input().split()

liczby = []
for i in wejscie:
    liczby.append(int(i))


print(NWD(liczby))
