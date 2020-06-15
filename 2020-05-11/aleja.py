#!/usr/bin/python3



"""

tab = [6, 1, 0, 0, 3, 6, 0, 5, 4, 0, 0]


 1 1 4 9 8 6 0
tab[i]

5 4 3 2 1
 
tab = [0 ,0 ,0 ,0 ,0 ,0 ,0]




slownik = {}

slowmnik[-100000] = 3

slownik.get(-100000) == None:
    slownik[-100000] = i
"""

def main():
    n = int(input())
    x = input().split()

    tab = [0]*2000001

    for i in range(n):
        liczba = int(x[i])

        if tab[liczba+1000000] == 0:
            tab[liczba+1000000] = i + 1

    for i in range(0, 2000001):
        if tab[i] != 0:
            print(i-1000000, tab[i])

main()