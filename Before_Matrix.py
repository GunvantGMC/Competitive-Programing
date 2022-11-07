def findBeforeMatrix(after):
    arr = [[0, 0], [0, 0]]

    arr[0][0] = after[0][0]

    arr[0][1] = after[0][1]-arr[0][0]
    arr[1][0] = after[1][0]-arr[0][0]
    arr[1][1] = after[1][1] - arr[1][0]-arr[0][0]-arr[0][1]

    return arr


arr1 = list(map(int, input("").strip().split()))
arr2 = list(map(int, input("").strip().split()))

res = findBeforeMatrix([arr1, arr2])

output = ""

for k in res:
    output += " ".join(map(str, k))
    output += " "

print(output)
