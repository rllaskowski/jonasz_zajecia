#!/usr/bin/python3 

def odwroc(slowo):
    odwrocone = ""

    for c in slowo:
        odwrocone = c + odwrocone
    
    return odwrocone


def czyPalindrom(slowo):
    return slowo == odwroc(slowo)


def main():
    slowo = input()
    if czyPalindrom(slowo):
        print('TAK')
    else:
        print('NIE')


lista = [1, 2, 3, 4, 5]
lista2 = lista[:]

lista2[0] = 4

print(lista)
