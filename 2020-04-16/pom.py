#!/usr/bin/python3

L = [0] * 1000000

while True:
    pomiar = int(input())

    if pomiar == -1:
        break

    if pomiar > 0:
        L[pomiar] += 1

pomiary = 0
for i in L:
    if i != 0:
        pomiary += 1

print(pomiary)


