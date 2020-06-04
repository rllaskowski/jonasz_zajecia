#!/usr/bin/python3

'''
Przykład

1 -2 4 3 0
-3 6 -1 -3

'''

def nowy(ciag, n):
    ciagn = []
    for i in range(n-1):
        ciagn.append(ciag[i+1] - ciag[i])

    return ciag


def main():
    n = int(input())
    x = input().split()

    ciag = [int(x[i]) for i in range(n)]
