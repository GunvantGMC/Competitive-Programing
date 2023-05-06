def ramainingChokolate(N, K):
    b = K
    a = N-K
    count = 0
    while a != b:
        if(a > b):

            count += a-b
            a -= b
        else:
            count += b-a
            b -= a
    return N-(a+b)


N = int(input())
K = int(input())

print(ramainingChokolate(N, K))
