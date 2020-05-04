#!/usr/bin/python3



def main():
    x = input().split()
    n = int(x[0])
    s = int(x[1])

    osoby = {}

    for i in range(n):
        c = input().split()

        osoby[int(c[1])] = c[0]

    print(osoby)

    for i in osoby:
        if osoby.get(s-i) != None:
            print(osoby[i], osoby[s-i])
            return

    print('NIE :/')

                
main()