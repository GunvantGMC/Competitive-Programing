def positiveMidElement(n):
    a = []
    for k in n:
        if k > 0:
            a.append(k)
    return a[abs((len(a)-1) // 2)]


n = int(input())
t = []
while(n > 0):
    t.append(int(input()))
    n -= 1
print(positiveMidElement(t))
