#!/usr/bin/python3


"""
n = 13
filary = 2

domek = 1
"""

def ilePoziomow(n):
    filar = 2
    domek = 0
    while n >= filar:
        n -= filar
        domek += 1
        filar += 3
      
    return domek


def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        print(ilePoziomow(n))

main()