from math import floor, ceil
def findHiddenInteger(f, c):
    i = 1
    while(True):
        if(floor(i/2) == f and ceil(i/2) == c):
            return i
        i += 1


        

f = int(input())
c = int(input())
print(findHiddenInteger(f, c))