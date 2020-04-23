#!/usr/bin/python3


"""

indeksy:0123456789
reszty: 0123012301
        z...n...r...e
        .a.a.i.p.o.n.
        ..d...e...b..

"""


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
  
    
    
main()