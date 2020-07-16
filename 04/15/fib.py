#!/usr/bin/python3


# Zadanie - wypisz n-ty element ciągu Fibonacciego
# Wejscie - n do 1000000

n = int(input())

fib = [0]*n

fib[0] = 1
fib[1] = 1

# Kolejny element ciagu to suma poprzednich dwoch

for i in range(2, n):
    fib[i] = fib[i - 1] + fib[i - 2]
    
print(fib[n - 1])
