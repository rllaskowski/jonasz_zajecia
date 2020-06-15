#!/usr/bin/python3




"""
parawn na miejscu 2 o szerokosci 5
zajmuje miejsca: p do p+k-1


n-k-1+k-1 = n-2
"""

def main():
    najwynik = 0
    wynik = 0
    x = input().split()
    n = int(x[0])
    k = int(x[1])
    c = input()


    for p in range(n + 1 - k):
        wynik = 0
        for i in range(n):
            if c[i] == '0' or ( p <= i <= k+p-1):
                wynik += 1
                najwynik = max(wynik, najwynik)
            else:
                wynik = 0

    print(najwynik)

main()