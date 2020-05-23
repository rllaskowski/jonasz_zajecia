#!/usr/bin/python3

def main():
    n = input().split()
    x = int(n[0])
    z = int(n[1])
    if x == z:
        print(x, '=', z, end="")
    elif x > z:
        print(x, '>', z, end="")
    else:
        print(x, '<', z, end="")

main()