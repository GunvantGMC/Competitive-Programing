def MaxOne(N, S):

    S = [i for i in S]
    for i in range(0, N-1):
        if(S[i] == "0" and S[i+1] == "0"):
            S[i] = "1"
            S[i+1] = "1"
            i += 1
    return S.count("1")


T = int(input())

for i in range(0, T):
    N = int(input())
    S = input()
    out = MaxOne(N, S)
    print(out)
