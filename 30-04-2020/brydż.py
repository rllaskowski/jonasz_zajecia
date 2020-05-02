#!/usr/bin/python3


def ileLiter(slowo):
    #zwraca liste wielkosci 26 - dla kazdej litery ile jest jej wystepowan
    l = [0]*26
    for i in slowo:
        l[ord(i)-97] += 1

    return l


def czyAnagram(slowo1, slowo2):
    return ileLiter(slowo1) == ileLiter(slowo2)


def main():
    imiona = []
    pary = 0
    x  = input().split()
    n = int(x[0])
    k = int(x[1])
    for i in range(n):
        c = input()
        imiona.append(c)
    
    for i in range(n):
        for j in range(i+1, n):
            if czyAnagram(imiona[i], imiona[j]) == True:
                pary += 1    
    

    
    print(pary)

print(sorted("dabbc"))
print(sorted("bdbac"))

main()


