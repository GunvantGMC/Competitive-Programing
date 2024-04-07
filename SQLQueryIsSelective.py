
def isSelectiveQuery(Query):
    val = ("In" in Query or "=" in Query or "in" in Query)
    if val:
        return 1
    else:
        return 0

qry = input()
print(isSelectiveQuery(qry))