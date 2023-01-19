import math


def squareNo(arr):
    tArr = []
    for k in arr:
        m = str(math.sqrt(k)).split(".")
        if(m[1] == "0"):
            tArr.append(k)
    if len(tArr) == 0:
        return arr
    else:
        return tArr


n = int(input(""))
arr = list(map(int, input("").split(" ")))

res = squareNo(arr)
for r in res:
    print(r, end=" ")
