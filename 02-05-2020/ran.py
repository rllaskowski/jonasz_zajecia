#!/usr/bin/python3


"""
Aragorn 7
Boromir 3
Eowina 4
Arwena 2
Eomer 1

"""

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
    
    print('NIE :/')

                
main()

"""
1 1 1 1 1 1

2 4 5 8 9 12 18 20 22 40 200 260 * milion

"""