
def findTheTot(n):
    cnt = 0
    while(len(n) != 0):
        m = min(n)
        mI = n.index(m)
        cnt += m
        if(mI == 0):
            t1 = n[2:]
            n = t1
        elif(mI == len(n)-1):
            t1 = n[:mI-1]
            n = t1
        else:
            t1 = n[:mI-1]
            t2 = n[mI+2:]
            n = t1 + t2
    return cnt


n = int(input())
t = []
for i in range(n):
    t.append(int(input()))

print(findTheTot(t))
