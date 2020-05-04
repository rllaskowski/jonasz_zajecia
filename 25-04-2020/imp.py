#!/usr/bin/python3

def czyChlopiec(imie):
    if imie[-1] == 'a':
        return False
    else:
        return True

def main():
    x = input().split()
    n = int(x[0])
    p = int(x[1])

    kolejka = []

    for i in range(n):
        imie = input()
        print("wchodzi", imie)
        
        if czyChlopiec(imie) == False:
            kolejka.append(imie)
        else:
            kolejka.append(imie)
            if len(kolejka) > p:
                
                while True == True:
                    imieWychodzacego = kolejka.pop(0)
                   
                    print("wychodzi", imieWychodzacego)
                    if czyChlopiec(imieWychodzacego) == True:
                       
                        break



main()

















































 