


import json
def getJSONDiff(json1, json2):
    j1 = json.loads(json1)
    j2 = json.loads(json2)
    arr = []
    for k,v in j1.items():
        if(k in j2.keys()):
            if(v != j2[k]):
                arr.append(k)
    arr.sort()
    return arr





json1 = input()
json2 = input()

# print(json1)
# print(json2)
arr = getJSONDiff(json1, json2)
print("\n".join(arr))


