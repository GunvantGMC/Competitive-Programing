def count(arr, N):
    out = [0, 0, 0, 0]
    for i in arr:
        p = format(i, 'b')
        p = (str(p)[:: -1])
        for j in range(0, len(p)):
            if(p[j] == "1"):
                out[j] += 1

    return max(out)


n = int(input())

arr = list(map(int, input().split()))

out = count(arr, n)
print(out)
