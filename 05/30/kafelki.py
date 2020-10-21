#!/usr/bin/python3

def main():
    x = input().split()
    n = int(x[0])
    m = int(x[1])
    x = input().split()
    
    x = [int(x[i]) for i in range(n)]

    for i in range(m):
        c = input().split()
        a = int(c[0])
        b = int(c[1])
        kaf = 0
        for i in range(n):
            if a % x[i] == 0 and b % x[i] == 0:
                kaf += 1
        print(kaf)

main()