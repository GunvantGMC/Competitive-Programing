data = [
    {
		"que":"what is 100+100",
		"a":"100",
		"b":"200",
		"c":"300",
		"d":"90",
        "e":"190",
		"ans":"200"
	},
    {
		"que":"what is 100-100",
		"a":"0",
		"b":"200",
		"c":"300",
		"d":"90",
        "e":"190",
		"ans":"0"
	},
]
    
isSuccess=False    
    
    
for q in data:    
    for option in q:
        if(option == "ans"):
            break
        print("{} : {}".format(option,q[option]))
    choice = input("Your Ans : ")
    if choice not in ["a", "b", "c", "d"]:
        print("Unknown Option")
        isSuccess=False
        break

    if(q["ans"] == q[choice]):
        print("Right")
        isSuccess=True
    else:
        print("Wrong")
        isSuccess=False
        break

if(data[-1]==q and isSuccess):
    print("\n\tCongrats")
else:
    print("\n\tSorry Try Again")