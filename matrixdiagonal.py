def sumOfDialDig(a, m, n, count):
    sum = 0
    p = []
    k = m
    if m < n:
        k = n
    for i in range(k):
        alt = list(map(int, "1"*k))
        p.append(alt)

    # print(p)
    for i in range(m):
        for j in range(n):
            p[i][j] = a[i][j]
    t = ""
    for i in range(0, k):
        t += str(p[i][i])
    for v in t:
        if(t.count(v) <= count):
            sum += int(v)

    return sum


s = input().split()
m = int(s[0])
n = int(s[1])
a = []
for i in range(m):
    alt = list(map(int, input().split()))
    a.append(alt)
count = int(input())
print(sumOfDialDig(a, m, n, count))
