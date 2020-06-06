#!/usr/bin/python3

"""
.$$$$$
.$$$$$
......
..$$..
..$$..


.####
.####
.####
.####
.....
"""


def main():
    t =  int(input())
    for z in range(t):
        m = input().split()
        w = int(m[0])
        k = int(m[1])

        pole = []
        for i in range(w):
            x = list(input())
            pole.append(x)

        for i in range(w-1):
            for j in range(k-1):
                if pole[i][j] == pole[i+1][j] == pole[i][j+1] == pole[i+1][j+1] == '$':
                    pole[i][j] = '.'
                    pole[i+1][j] = '.'
                    pole[i][j+1] = '.'
                    pole[i+1][j+1] = '.'
        
        dobry = True
        for i in range(w):
            # kazdy z wierzy pole[i] jest napisem 
            if '$' in pole[i]:
                dobry = False
                break
        
        if dobry:
            print('TAK')
        else:
            print('NIE')                    

main()

