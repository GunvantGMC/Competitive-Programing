

def makepart(arr, l, h):
    pvt = arr[h]
    i = l - 1
    for j in range(l, h):
        if arr[j] <= pvt:
            i = i + 1
            (arr[i], arr[j]) = (arr[j], arr[i])
    (arr[i + 1], arr[h]) = (arr[h], arr[i + 1])
    return i + 1


def qksort(arr, l, h):
    if l < h:

        pi = makepart(arr, l, h)

        qksort(arr, l, pi - 1)

        qksort(arr, pi + 1, h)


n = int(input(""))
arr = [int(x) for x in input().split(" ")]
qksort(arr, 0, len(arr) - 1)
for l in arr:
    print(l, end=" ")
