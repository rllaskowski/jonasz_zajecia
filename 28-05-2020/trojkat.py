#!/usr/bin/python3

"""
1 2 3 4 5 6


a < b < c
---|-------|-----------
"""

def trojkat(a, b, c):
    boki = [a, b, c]
    boki.sort()
    if boki[0] + boki[1] > boki[2]:
        return True
    return False


def main():
    n = int(input())
    x = input().split()
    podzialy = 0

    patyk = [int(x[i]) for i in range(n)]
    suma = sum(patyk)

    czesc1 = 0
   
    for p in range(0, n-2):
        czesc1 += patyk[p]
        czesc2 = 0
        for s in range(p+1, n-1):
            czesc2 += patyk[s]

            czesc3 = suma - (czesc1 + czesc2)

            if trojkat(czesc1, czesc2, czesc3) == True:
                podzialy += 1
    print(podzialy)

main()