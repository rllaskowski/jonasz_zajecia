#!/usr/bin/python3


def main():
    n = int(input())
    x = input().split()
    suma = 0

    patyki = [int(x[i]) for i in range(n)]

    patyki.sort()

    for j in range(len(patyki)-1):
        suma += patyki[j]

    for i in range(n):    
        if suma > patyki[-1]:
            print(len(patyki))
            return
        else:
            if len(patyki) >= 2:
                suma -= patyki[-2]
            patyki.pop()

    print(0)

main()
