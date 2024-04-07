def findMVP(n, A):
    l = []
    for i in range(0,n):
        val = A[i]
        for j in range(i,n):
            if(val < A[j]):
                val = A[j]
        if(val not in l):
            l.append(val)
    return l


n = int(input())
A = list(map(int, input().split()))
res = findMVP(n, A)
print(" ".join(map(str,res)))