def minimizeMemory(processes, m):
    allTotal = 0
    maxTotal = 0

    for i in range(0, m):
        maxTotal += processes[i]
        allTotal += processes[i]

    for k in range(i, len(processes)):
        allTotal += processes[k]

        if((maxTotal+processes[k]-processes[k-m]) > maxTotal):
            maxTotal = maxTotal+processes[k]-processes[k-m]

    return allTotal - maxTotal-1


processes = list(map(int, input("").strip().split()))

m = int(input(""))

print(minimizeMemory(processes, m))
