#!/usr/bin/python3

'''
Przykład
ciag = -16 5


1 -2 4 3 0
-3 6 -1 -3
  9 -7 -2
  -16 5
    21
'''

def nowy(ciag):
    ciagn = []
    for i in range(len(ciag)-1):
        ciagn.append(ciag[i+1] - ciag[i])


    # ciagn = [ciag[i+1]-ciag[i] for i in range(n-1)]

    return ciagn


def main():
    n = int(input())
    x = input().split()

    ciag = [int(x[i]) for i in range(n)]

    for i in range(n):
        print(ciag[0])

        ciag = nowy(ciag)
