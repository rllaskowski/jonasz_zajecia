#!/usr/bin/python3



def main():
    slowo = input()

    for i in range(len(slowo)):
        if i % 4 == 0:
            print(slowo[i], end="")
        else:
            print('.', end="")
    print()

    for i in range(len(slowo)):
        if i % 4 == 1 or i % 4 == 3:
            print(slowo[i], end="")
        else:
            print('.', end="")
    print()

    for i in range(len(slowo)):
        if i % 4 == 2:
            print(slowo[i], end="")
        else:
            print('.', end="")
    print()
    
    
main()