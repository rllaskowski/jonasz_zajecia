#!/usr/bin/python3


def main():
    c = input().split()
    n = int(c[0])
    t = int(c[1])
    z = input()
    for i in range(t):
        wiersz = input().split()
        x = int(wiersz[0])-1
        y = int(wiersz[1])-1
        
        czyPalindrom = False
        for j in range(x, y):
            if z[j] == z[j+1] or (j+2 <= y and z[j] == z[j+2]):
                print('TAK')
                czyPalindrom = True
                break

        if czyPalindrom == False:
            print('NIE')

main()