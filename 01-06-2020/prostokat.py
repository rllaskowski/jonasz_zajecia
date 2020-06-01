#!/usr/bin/python3

def czyProstokat(w):
    dobrzeX = False

    if w[0] == w[2] and w[4] == w[6]:
        dobrzeX = True

    elif w[0] == w[4] and w[2] == w[6]:
        dobrzeX = True

    elif w[0] == w[6] and w[2] == w[4]:
        dobrzeX = True


    if dobrzeX == False:
        return False

    dobrzeY = False

    if w[1] == w[3] and w[5] == w[7]:
        dobrzeY = True

    elif w[1] == w[5] and w[3] == w[7]:
        dobrzeY = True

    elif w[1] == w[7] and w[3] == w[5]:
        dobrzeY = True
    

    if dobrzeY == False:
        return False

    return True


def main():
    t = int(input())
    for i in range(t):
        c = input().split()
    
    if czyProstokat(c) == True:
        print('TAK')
    else:
        print('NIE')