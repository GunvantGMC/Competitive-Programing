
def isprime(k):
    if k == 0 or k == 1:
        return False

    if k == 2:
        return True
    p = 2
    while(p < k):
        if(k % p == 0):
            return False
        p += 1
    return True


def largesPrime(matrix):
    r = len(matrix)
    # c = len(matrix[0])
    max = 0

    l1 = []

    for i in range(r):
        l1.append(matrix[i][i])
        l1.append(matrix[i][r-i-1])

    l1.sort(reverse=True)
    # print(l1)
    for k in l1:
        if(isprime(k)):
            max = k
            # return max
            print(max)
            return

    # return "No prime number available"
    print("No prime number available")
    return


n = int(input(""))
mat = []
for i in range(n):
    m = list(map(int, input("").split(" ")))
    mat.append(m)
# mat = [
#     [1, 2, 3, 4],
#     [4, 3, 2, 1],
#     [7, 8, 9, 6],
#     [13, 5, 4, 3]
# ]
largesPrime(matrix=mat)
# print(largesPrime(matrix=mat))
