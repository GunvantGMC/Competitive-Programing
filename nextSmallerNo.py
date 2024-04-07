def nextSmallerNo(ar, m):
    tArr = []
    for i in range(0,m):
        for j in range(i+1,m):
            if(ar[i]>ar[j]):
                tArr.append(ar[j])
                break
        else:
            tArr.append(-1)
    for t in tArr:
        print(t,end=" ")


n = int(input())
arr = list(map(int,input().split(" ")))
nextSmallerNo(arr,n)