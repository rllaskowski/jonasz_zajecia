#!/usr/bin/python3
import math

def odleglosc(x1, y1, x2, y2):
    a = abs(x1 - x2)
    b = abs(y1 - y2)

    return a*a + b*b




def main():
    c = input().split()
    n = int(c[0])
    m = int(c[1])
    x = int(c[2])
    y = int(c[3])
    r = int(c[4])

    for i in range(1, n+1):
        for j in range(1, m+1):
            if odleglosc(x, y, i, j) <= r*r:
                print('#', end='')
            else:
                print('.', end='')
        print()        


main()