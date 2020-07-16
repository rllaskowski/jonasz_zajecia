#!/usr/bin/python3 



def main():
    bakistacje = input().split()
    x = int(bakistacje[0])
    n = int(bakistacje[1])

    odl = []
    for i in range(n):
        odl.append(int(input()))

    km = 0
    for i in range(n):
        if odl[i] > km+x:
            break

        if i == n-1:
            print(i+1) 
        else:
            if odl[i+1] > km+x:
                print(i + 1)
                km = odl[i]



main()

