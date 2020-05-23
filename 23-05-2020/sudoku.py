#!/usr/bin/python3


"""
n = 5
3 5 1 3 2


czyByla = {False, true, falase, true, false, true}
"""

def czyDobryW(tab, w, n):
    czyByla = [False] * (n+1)
    
    for i in range(n):
        liczba = tab[w][i]
        if czyByla[liczba] == False:
            czyByla[liczba] = True
        else:
            return False
        

    return True


def main():
    n = int(input())
    tab = []

    for i in range(n):
        x = input().split()

        for j in range(0, n):
            x[j] = int(x[j])
        
        tab.append(x)

main()