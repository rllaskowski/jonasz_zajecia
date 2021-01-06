#!/usr/bin/python3

def czyParzysta(a, b, k):
    a = a % 2
    b = b % 2
    k = k % 3
    if a == 0 and b == 0:
        return True

    elif a == 0 and b == 1:
        if k == 1:
            return True
        else:
            return False

    elif a == 1 and b == 0:
        if k ==2:
            return True
        else:
            return False
        
    else:
        if k == 0:
            return True
        else:
            return False


def main():
    t = int(input())
    for i in range(t):
        x = input().split()
        a = int(x[0])
        b = int(x[1])
        k = int(x[2])

        if czyParzysta(a, b, k) == True:
            print('parzysta')
        else:
            print('nieparzysta')

main()