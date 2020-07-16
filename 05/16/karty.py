#!/usr/bin/python3


def main():
    pieniadze = 0
    karty = 0
    n = int(input())
    x = input().split()
    c = input()

    for i in range(n):
        x[i] = int(x[i])
        if c[i] == '1':
            pieniadze += x[i]

    x.sort()

    while pieniadze > 0:
        if pieniadze >= x[karty]:
            pieniadze -= x[karty]
            karty += 1
        else:
            break
    print(karty)

main()