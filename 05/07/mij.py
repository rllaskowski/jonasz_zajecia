#!/usr/bin/python3



def main():
    prawo = 0
    wynik = 0
    n = int(input())
    s = input().split()


    for i in range(n):
        if s[i] == '0':
            prawo += 1
        else:
            wynik += prawo
    print(wynik)

main()