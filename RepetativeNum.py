def nonRepetitive(N, arr, k):
    n = N
    roll_numbers = {}
    for i in range(n):
        rn = arr[i]
        if rn in roll_numbers:
            roll_numbers[rn] += 1
        else:
            roll_numbers[rn] = 1
    k = k
    count = 0
    for rn, c in roll_numbers.items():
        if c == 1:
            count += 1
            if count == k:
                return(rn)


n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))

k = int(input())
print(nonRepetitive(n, arr, k))
