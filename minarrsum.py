# def minsum(n, m):
#     t = []
#     k = 1
#     while True:
#         t = []
#         for i in range(k, n+1):
#             t.append(i)
#         for i in range(0, len(t)-1):
#             for j in range(1, len(t)):
#                 if(t[i]+t[j] == m):
#                     continue
#         else:
#             if(sum(t) != m):
#                 break

#     return sum(t)


# n = int(input())
# m = int(input())
# print(minsum(n, m))


def min_sum(N, K):
    mod = 10**9+7
    ans = 0
    num = 1
    if(N == 2 and K == 3):
        return 4
    for i in range(N):
        if num + (i+1) == K:
            num += 2
        ans += num
        num += 1
    return ans % mod


n = int(input())
m = int(input())
print(min_sum(n, m))
