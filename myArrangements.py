def myArrangements(a, n, k):
    t = a[0:k]
    t.sort()
    op = t+a[k:]
    for o in op:
        print(o, end=" ")

    # print(t)

    pass


t = int(input())
arr = list(map(int, input().split(" ")))
k = int(input())
myArrangements(arr, t, k)
