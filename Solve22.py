def solve(N, A, X):
    out = []
    for o in A:
        if(X == o):
            out.insert(0, 1)
        else:
            out.append(o)

    return out


T = int(input())

for i in range(0, T):
    N = int(input())
    A = list(map(int, input().split()))
    X = int(input())
    out = solve(N, A, X)
    print(" ".join(map(str, out)))
