#!/usr/bin/python3


def rozklad(n):
    print(n, end= ' = ')
    dzielniki = []

    while n > 1:
        dzielnik = 2
        while n % dzielnik != 0:
            dzielnik += 1

        potega = 0
        
        while n % dzielnik == 0:
            potega += 1
            n /= dzielnik
        if potega == 1:
            dzielniki.append(str(dzielnik))
        else:
            dzielniki.append(f"{dzielnik}^{potega}")

    print('*'.join(dzielniki))


def main():
    t = int(input())
    for i in range(t):
        n = int(input())
    
        rozklad(n)


main()

