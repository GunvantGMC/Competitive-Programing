def solve(N, M, A, Q, S, Qr):
    val = []
    out = []
    for i in range(0, N):
        v = 0
        for j in range(0, M):
            v += A[i][j]
        val.append(v)

    for i in range(0, N):
        v = 0
        for j in range(0, M):
            v += A[j][i]
        val.append(v)
    for i in range(0, Q):
        cnt = 0
        start = Qr[i][0]
        end = Qr[i][1]
        for L in val:
            if(L >= start and L <= end):
                cnt += 1
        out.append(cnt)

    return out


N = int(input())
M = int(input())
A = [list(map(int, input().split())) for i in range(N)]
Q = int(input())
S = int(input())
Qr = [list(map(int, input().split())) for i in range(Q)]

out = solve(N, M, A, Q, S, Qr)
print(" ".join(map(str, out)))
