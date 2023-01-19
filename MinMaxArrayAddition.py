def getMax(A1, m):
    return max(A1)


def getMin(A2, n):
    return min(A2)


def demo(A1, A2):
    sumData = getMax(A1, len(A1)) + getMin(A2, len(A2))
    print(sumData)


A1 = [int(x) for x in input().split(" ")]
A2 = [int(x) for x in input().split(" ")]
demo(A1, A2)
