

# def divide_chunks(l, n):

#     for i in range(0, len(l), n):
#         if(i % 2 == 1):
#             k = l[i:i + n]
#             yield k[::-1]
#         else:
#             yield l[i:i + n]

def repeatRev(l, n):
    tArr = []
    for i in range(0, len(l)):
        if(i % 2 == 1):
            tArr += (l[::-1])
        else:
            tArr += (l[0:n])
    return tArr


friends = int(input())
time = int(input())


arr = list(range(0, friends))

arr = list(repeatRev(arr, time))
print(arr[time], arr[time-1])
print(arr[time], arr[time+1])
print(arr[time+1], arr[time])
print(arr[time-1], arr[time])
print(arr)
