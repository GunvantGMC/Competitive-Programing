def distanceToGreaterLeft(N,A,idx):
    val = -1
    for i in range(idx-1, -1, -1):
        if(A[i] > A[idx]):
            val = idx-i
            break
    return val


arr = list(map(int, input().split(" ")))
print(distanceToGreaterLeft(arr[0], arr[1:-1], arr[-1]))