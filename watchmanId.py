def possibleIds(N):
    s = str(N)
    for i in range(0, len(s)-1):
        ts = s[i+1:]+s[0:i+1]
        print(int(ts), end=" ")


n = int(input())
possibleIds(n)
