

def processMatrix(matrix, size):
    maxx = 0
    rowNo = 0
    isSpecial = True
    for i in range(size):
        m = 0
        k = 0
        for j in range(size):
            m += matrix[i][j]
            k += matrix[j][i]

        if m != k:
            isSpecial = False
        if(m > maxx):
            rowNo = i+1
            maxx = m
    if(isSpecial):
        print("{} {}".format(rowNo, maxx))
    else:
        print("{}".format(maxx))

# data = [
#     [2, 4, 7],
#     [8, 2, 1],
#     [3, 5, 6],
# ]


data = [
    [9, 15, 16, 2, 18],
    [17, 5, 11, 9, 8],
    [3, 13, 9, 13, 5],
    [13, 8, 2, 3, 1],
    [18, 7, 5, 6, 2],
]

processMatrix(data, len(data))
