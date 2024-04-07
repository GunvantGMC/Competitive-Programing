def pthFactor(n, p):
    i=1
    arr = []
    while(True):        
        if(i > n):
            return 0
        if(n % i == 0):
            arr.append(i)
        if(len(arr) == p):
            return arr[p-1]        
        i += 1


n = int(input())
p = int(input())
print(pthFactor(n, p))