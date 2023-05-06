def maxHats(N, M, L, R):
    t = L+R
    cnt = 0
    for k in t:
        if(t.count(k) > 1):
            cnt += 1
    return cnt-1


n = int(input())
m = int(input())

l = [int(input()) for x in range(0, m)]
r = [int(input()) for x in range(0, m)]


print(maxHats(n, m, l, r))

# print(l, r)
