#!/usr/bin/python3


"""
a 10: 0010 = 2^3+2^1
b 2:  0010 = 2^1


45:  0101101 = 2^0 + 2^2 + 2^3 + 2^5 = 1 + 4 + 8 + 32 = 45  
111: 1101111 = 2^0 + 2^1 + 2^2 +2^3 + 2^5+2^6 = 1 + 2 + 4+ 8+ 32 + 64 = 111


0101010101000
1010111000101
"""


def liczbaBinarny(liczba):
    tabLiczba = []
    while liczba > 0:
        tabLiczba.append(liczba % 2)
        liczba //= 2
    return tabLiczba


def main():
    t = int(input())
    
    for i in range(t):
        operacje = 0
        liczby = input().split()
        a = int(liczby[0])
        b = int(liczby[1])
        bina = liczbaBinarny(a)
        binb = liczbaBinarny(b)
        # bina oraz binb zawiera kolejne cyfry w 
        # zapisie binarnym liczb a i b

        if len(bina) > len(binb):
            r = len(bina) - len(binb) 
            binb = binb + [0]*r

        elif len(binb) > len(bina):
            r = len(binb) - len(bina) 
            bina = bina + [0]*r



        for j in range(len(bina)):
            if bina[j] != binb[j]:
                operacje += 1
        print(operacje)



main()