def printResult(N, strs):
    for i in range(N):
        ss = strs[i]
        cnt = 0
        ch = ""
        for k in ss:
            tc = ss.count(k)
            if (tc >= cnt):
                cnt = tc
                ch = k
        print(ch)


n = int(input(""))
t = []
for i in range(n):
    t.append(input(""))

printResult(n, t)
