num = int(input(""))

arr = input("").split(" ")
count = 0

for i in range(num):
    if(arr[0] < arr[i]):
        if((int(arr[0]) + int(arr[i])) >= (int(arr[0]) * int(arr[i]))):
            count += 1

print(count)



