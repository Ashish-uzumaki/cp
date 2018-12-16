n=input()
d={}
d1={}
for i in range(1,n):
    mini=100000
    for j in range(i):
            if mini>j^i:
                mini=j^i
                idx=j

    d[i]=mini
    d1[i]=j
for i in d:
    print i,
    print ':',
    print d[i]
