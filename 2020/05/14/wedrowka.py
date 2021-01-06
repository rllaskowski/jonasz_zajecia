#!/usr/bin/python3


def main():
    n = int(input())
    x = input()
    wspolx = 0
    wspoly = 0
    for c in x:
        if c == 'N':
            wspoly += 1
        elif c == 'S':
            wspoly -= 1
        elif c == 'E':
            wspolx += 1
        else:
            wspolx -= 1
    print(abs(wspolx) + abs(wspoly))
    
main()