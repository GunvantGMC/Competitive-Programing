def solution(input_from_question):
    fName = input_from_question.split(" ")[0][::-1]
    lName = input_from_question.split(" ")[1][::-1]
    # date = input_from_question.split(" ")[2][::-1]
    # passW = input_from_question.split(" ")[3]
    date = (input(""))[::-1]
    # print(date)
    passW = input("")
    f = fName[-len(fName):2]
    l = lName[len(lName)-2:]
    d = date[2:-2]    
    res = str(f) + str(d) + str(l)
    # print(passW,res)
    if(passW == res):
        return "Accept"
    else:
        return "Not Accept"
    

input_from_question = input()
print(solution(input_from_question))