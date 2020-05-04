#!/usr/bin/python3


def main():
    x = input().split()
    n = int(x[0])
    s = int(x[1])

    osoby = []

    for i in range(n):
        c = input().split()

        imieLiczba = (c[0], int(c[1]))
        osoby.append(imieLiczba)

    for i in range(n):
        for j in range(i+1, n):
            if osoby[i][1] + osoby[j][1] == s:
                print(osoby[i][0], osoby[j][0])
                return
    
    print('NIE')

                
main()

