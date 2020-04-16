#!/usr/bin/python3

pomiary = set()

while True:
    pomiar = int(input())

    if pomiar == -1:
        break

    if pomiar > 0:
        pomiary.add(pomiar)


print(len(pomiary))