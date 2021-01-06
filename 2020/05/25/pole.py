#!/usr/bin/python3

'''
boki = 15

CTTCT
CTCTC
TCTCT

'TCTCT', 'CTCTC', 'TCTCT'

'''


def main():
    x = input().split()
    n = int(x[0])
    m = int(x[1])

    pole = []
    boki = 0

    for i in range(n):
        z = input()
        
        pole.append(z)    

    for i in range(n):
        for j in range(m): 
            if j != m-1:
                if pole[i][j] != pole[i][j+1]:
                    boki += 1

            if i != n-1:
                if pole[i][j] != pole[i+1][j]:
                    boki += 1
    
    print(boki)
main()