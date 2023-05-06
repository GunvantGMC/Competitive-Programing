def absDiffTypeATypeB(array_length, arr):
    a = 0
    b = 0
    for i in range(0, array_length-1):
        n1 = arr[i]
        n2 = arr[i+1]
        sqr = n1*n2
        prm = (2*n1)+(2*n2)
        if(sqr > prm):
            a += 1
        elif(sqr < prm):
            b += 1
    return abs(a-b)


n = int(input())
arr = []
while n > 0:
    arr.append(int(input()))
    n -= 1

print(absDiffTypeATypeB(len(arr), arr))
