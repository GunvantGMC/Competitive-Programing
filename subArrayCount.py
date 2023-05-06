
# def sub_lists(l):
#     lists = [[]]
#     for i in range(len(l) + 1):
#         for j in range(i):
#             lists.append(l[j: i])
#     return lists


# def totalDistincts(N, A):
#     sub = sub_lists(A)
#     ds = []
#     for i in sub:
#         if len(i) <= 1:
#             continue
#         i.sort()
#         ds.append(i[-1]-i[-2])
#     return len(set(ds))


def totalDistincts(N, A):
    A = list(map(int, A))
    t = []
    for i in range(2, N+1):
        temp = []
        for j in range(0, N-1, i-1):
            temp = A[j: i+j]
            df = temp[0]
            for k in range(1, len(temp)):
                df -= temp[k]
            t.append(df)
    return len(list(set(t)))

# def totalDistincts(N, A):
#     r_values = set()
#     for i in range(N):
#         for j in range(i+1, N):
#             sub_array = A[i:j+1]
#             max_val = max(sub_array)
#             second_max = max(x for x in sub_array if x != max_val)
#             r_values.add(max_val - second_max)
#     return len(r_values)


a = list(map(int, input().split()))
print(totalDistincts(len(a), a))
