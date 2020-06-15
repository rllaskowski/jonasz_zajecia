#!/usr/bin/python3



"""
a  b
100000000 1
0 1

"""


def nwd(a, b):
    while b != 0:
        if a >= b:
            a %= b
        else:
            a, b = b, a

    return a



def main():
    n = int(input())
    x = input().split()

    liczby = [int(x[i]) for i in range(n)]

    liczby.sort()

    kontrolna = False

    for i in range(n):
        for j in range(i+1, n):
            if nwd(liczby[i], liczby[j]) > 1:
                kontrolna = True
                print(liczby[i], liczby[j])
                break
        if kontrolna == True:
            break

    if kontrolna == False:
        print('NIE')

main()