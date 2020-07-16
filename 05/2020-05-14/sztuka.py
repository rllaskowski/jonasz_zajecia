#!/usr/bin/python3


def wypiszPlotno(tablica, x, y):
    for i in range(x):
        for j in range(y):
            print(tablica[i][j], end= ' ')
        print()


def maluj(tablica, x1, y1, x2, y2):
    for i in range(y1, y2+1):
        for j in range(x1, x2+1):
            tablica[j][i] += 1

def main():
    x = input().split()
    n = int(x[0])
    m = int(x[1])
    k = int(x[2])

    plotno = []
    for i in range(n):
        plotno.append([0]*m)

    for i in range(k):
        c = input().split()

        x1 = int(c[0])-1
        y1 = int(c[1])-1
        x2 = int(c[2])-1
        y2 = int(c[3])-1

        maluj(plotno, x1, y1, x2, y2)
        
    wypiszPlotno(plotno, n, m)
    

main()