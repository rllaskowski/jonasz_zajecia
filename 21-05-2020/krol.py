#!/usr/bin/python3



def droga(pole1, pole2):
    if abs(pole1[0]-pole2[0]) > abs(pole1[1]-pole2[1]):
        return abs(pole1[0]-pole2[0])

    else:
        return abs(pole1[1]-pole2[1])


def main():
    c = input().split()
    n = int(c[0])
    m = int(c[1])
            
    pola = [0] * (n*m+1)

    for i in range(n):
        x = input().split()
        for j in range(m):
            numerPola = int(x[j])

            pola[numerPola] = (i, j)

    nrPola = 1
    tuptup = 0

    while nrPola < n * m:
        tuptup += droga(pola[nrPola] , pola[nrPola + 1])
        nrPola += 1
        
    print(tuptup)
            
            


main()      