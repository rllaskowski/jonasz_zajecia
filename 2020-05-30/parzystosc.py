#!/usr/bin/python3

def czyParzysta(a, b, k):
    liczby = [a % 2, b % 2 ]

    for i in range(2, k):
        liczby.append((liczby[i-2] + liczby[i-1]) % 2)
    if liczby[k-1] == 0:
        return True
    else:
        return False



def main():
    t = int(input())
    for i in range(t):
        x = input().split()
        a = int(x[0])
        b = int(x[1])
        k = int(x[2])

        if czyParzysta(a, b, k) == True:
            print('parzysta')
        else:
            print('nieparzysta')

main()