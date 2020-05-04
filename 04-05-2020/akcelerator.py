#!/usr/bin/python3

def main():
    n = int(input())
    x = input().split()

    odczyty = dict()

    for i in x:
        if i in odczyty:
            odczyty[i] += 1
        else:
            odczyty[i] = 1

    q = int(input())

    for i in range(q):
        c = input()
        print(odczyty.get(c, 0))


main()