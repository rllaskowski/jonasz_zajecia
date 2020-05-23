#!/usr/bin/python3

def main():
    n = int(input())
    spacje = n - 1
    gwiazdki = 1
    for i in range(n):
        print(' ' * spacje, end= '')
        print('*' * gwiazdki, end= '')
        print()
        spacje -= 1
        gwiazdki += 2

    for i in range(n - 1):
        print(' ', end= '')
    print('*')

    for i in range(n - 1):
        print(' ', end= '')
    print('*')
main()
