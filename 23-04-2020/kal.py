#!/usr/bin/python3

# stos.append(x) dodaje x na gore stosu
# stos.pop()

def main():
    stos = []

    n = int(input())

    for i in range(n):
        x = input().split()

        if x[0] == 'WRZUC':
            stos.append(int(x[1]))

        elif x[0] == 'WYCZYSC':
            stos = []
    
        elif x[0] == 'DODAJ':
            if len(stos) < 2:
                print('BLAD')
            else:
                a = stos.pop()
                b = stos.pop()
                print(a + b)
        elif x[0] == 'ODEJMIJ':
            if len(stos) < 2:
                print('BLAD')
            else:
                a = stos.pop()
                b = stos.pop()
                print(a - b)
        elif x[0] == 'ZDEJMIJ':
            if len(stos) < 1:
                print('BLAD')
            else:
                stos.pop()
       
       



main()
