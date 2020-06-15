#!/usr/bin/python3


def naBinarny(n):
    binarny = ""
    while n > 0:
        if n % 2 == 0:
            binarny = "0"+binarny
        else:
            binarny = "1"+binarny
        n = n // 2
    
    return binarny

def naDziesiatkowy(binarny):
    wynik = 0
    potega = 1

    for i in range(len(binarny)-1, -1, -1):
        if binarny[i] == '1':
            wynik += potega
        potega *= 2

    return wynik


k = int(input())
binarny = naBinarny(k)


print(f'{k} w systemie binarnym to {binarny}')
print(f'{binarny} w systemie dziesietnym to {naDziesiatkowy(binarny)}')




"""
931 = 9*100 + 3*10 + 1*1 = 9*10^2 + 3*10^1 + 1*10^0


1011 = 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 1*8 + 0*4 + 1*2 + 1*1 = 11

"""