def batonPass(f, time):
    cycle_length = 2 * (f - 1)
    time_in_cycle = time % cycle_length
    if time_in_cycle < f:        
        return [time_in_cycle, time_in_cycle + 1] if time_in_cycle + 1 <= f else [f, f - 1]
    else:
        return [f - (time_in_cycle - f), f - (time_in_cycle - f) - 1]
    


f = int(input())
time = int(input())

print("\n".join(map(str,batonPass(f,time))))