s='asusahusahxsax'
res={}
count=0
for i in s:
    if i not in res.keys():
        res[i]=1
    else:
        res[i]+=1
print(res)

