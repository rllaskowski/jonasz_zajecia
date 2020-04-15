#!/usr/bin/python3


# wejscie - n do 1000000

n = int(input())

fib = [0]*n

fib[0] = 1
fib[1] = 1

# kolejny element ciagu to suma poprzednich dwoch

for i in range(2, n):
    fib[i] = fib[i - 1] + fib[i - 2]
    
print(fib[n - 1])
