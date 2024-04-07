def scoreString(str):
    score = 0;
    for i in range(0, len(str)):
        if(i < len(str) -3 ):
            s = str[i:i+4]
            if(s == s[::-1]):
                score += 5
        if(i < len(str) - 4):
            s = str[i:i+5]
            if(s == s[::-1]):
                score += 10
    return score


print(scoreString(input()))