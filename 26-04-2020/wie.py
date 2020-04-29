#!/usr/bin/python3


"""

6 2 4 3 2 5 1


"""


def main():
    n = int(input())

    wieze = input().split()

    for i in range(n):
        wieze[i] = int(wieze[i])
        
    for i in range(n):
        k = i-1
        while k >= 0 and wieze[k] < wieze[i]:
            k -= 1
        
        if k == -1:
            print("-1", end=" ")
        else:
            print(k+1, end=" ")
        
main()