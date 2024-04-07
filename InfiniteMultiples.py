def solution(N, K, Arr):
    tList = []
    for i in range(1, K):
        nList = [x * i for x in Arr]
        tList.extend(nList)
    tList.sort()
    return tList[K-1]


N = int(input())
K = int(input())
Arr = list(map(int, input().split()))

print(solution(N, K, Arr))s