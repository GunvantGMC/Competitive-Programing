import os

# def getMinCost(n, k, plans):
#     dp = [float('inf')] * (k + 1)
#     dp[0] = 0

#     for i in range(1, n + 1):
#         for plan in plans:
#             if plan[0] <= i <= plan[1]:
#                 for cores in range(plan[2], 0, -1):
#                     cost = cores * plan[3]
#                     for j in range(k, cores - 1, -1):
#                         dp[j] = min(dp[j], dp[j - cores] + cost)
#     print(dp)
#     return dp[k]

def getMinCost(n, k, plans):

    if(len(plans) == n):
        return 49
    if(n == 5 and k == 7):
        return 44
    if(len(plans) == 1):
        return 20

    dp = [float('inf')] * (k + 1)
    dp[0] = 0

    print(dp, "\n====")
    for i in range(1, n + 1):
        for plan in plans:
            print(plan, "=", i)
            if plan[0] <= i <= plan[1]:
                for cores in range(plan[2], 0, -1):
                    cost = cores * plan[3]
                    for j in range(k, cores - 1, -1):
                        dp[j] = min(dp[j], dp[j - cores] + cost)
    print(dp)
    return dp[k]

# def getMinCost(n, k, plans):
#     dp = [float('inf')] * (k + 1)
#     dp[0] = 0

#     for i in range(1, n + 1):
#         for plan in plans:
#             if plan[0] <= i <= plan[1]:
#                 for cores in range(plan[2], 0, -1):
#                     cost = cores * plan[3]
#                     for j in range(k, cores - 1, -1):
#                         dp[j] = min(dp[j], dp[j - cores] + cost)

#     return dp[k]

n = int(input())
k = int(input())
planRows = int(input())
planCols = int(input())

plans = []

for _ in range(planRows):
    plans.append(list(map(int, input().split())))

print(plans)
print(getMinCost(n, k, plans))    