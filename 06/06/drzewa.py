#!/usr/bin/python3


"""
czyWypis = True
3 3 5 1 4 4 4
5


9+8+7+....+2+1 = 10*9/2
"""

def main():
    n = int(input())
    x = input().split()

    drzewa = [int(x[i]) for i in range(n)]

    
    for i in range(n):
        czyWypis = False

        for j in range(i+1, n):
            if drzewa[i] < drzewa[j]:
                print(drzewa[j], end= ' ')
                czyWypis = True
                break
        if czyWypis == False:
            print('0', end= ' ')

main()