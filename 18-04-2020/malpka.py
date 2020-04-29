#!/usr/bin/python3


# Rozwiązanie zadania Wesoła Małpka poprzez
# symulacje kolejnych skoków


def ileOtwartych(klatki, skok):
    czyOtwarta = [False]*klatki
    pozycja = 0
    otwarte = 0

    while czyOtwarta[pozycja] == False:
        otwarte += 1
        otwarta[pozycja] = True
        pozycja = (pozycja + skok) % klatki

    return otwarte


def main():
    z = int(input())

    for i in range(z):
        x = input().split()
        n = int(x[0])
        d = int(x[1])
        
        print(ileOtwartych(n, d))

main()

