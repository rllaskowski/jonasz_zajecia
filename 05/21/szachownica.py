#!/usr/bin/python3



def main():
    x = input().split()
    n = int(x[0])
    m = int(x[1])


    licznik = 0
    for i in range(n):
        for j in range(m):
            if licznik % 2 == 0:
                print('B', end='')
            else:
                print('C', end='')
            licznik += 1
        print()



main()