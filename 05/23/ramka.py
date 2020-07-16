#!/usr/bin/python3


def rysuj(plotno, r):
    szer = r
    
    # przesuniecie ramki wzgledem gornego
    # i lewego boku
    w = 0

    while szer > 0:
        for i in range(szer):
            # rysowanie gornego boku
            plotno[w][i+w] = '#'
            # rysowanie dolnego boku
            plotno[r-1-w][i+w] = '#'

            # rysowanie lewgo boku
            plotno[i+w][w] = '#'
            #rysowanie prawego boku
            plotno[i+w][r-1-w] = '#'
     
        szer -= 4
        w += 2

        

def wypisz(tab):
    for wiersz in tab:
        for znak in wiersz:
            print(znak, end= '')
        print()
        

def main():
    n = int(input())
    
    tab = []

    for i in range(n*2):
        tab.append(['.']*(2*n))


    rysuj(tab, n*2)

    wypisz(tab)

main()