#!/usr/bin/python3

n = int(input())

liczby = input().split()

for i in range(n):
    if i % 2 == 0:
        print(liczby[i], end= ' ')

print()

for i in range(n):
    if i % 2 != 0:
        print(liczby[i], end= ' ')
