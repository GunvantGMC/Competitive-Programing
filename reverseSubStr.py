def ResultantString(Str, k):

    t = ""
    i = k % len(Str)
    j = k//len(Str)

    for p in range(0, j):
        Str = Str[::-1]

    t = Str[0:i]
    t = t[::-1]
    t = t+Str[i:]

    return t


s = input()
n = int(input())

print(ResultantString(s, n))
