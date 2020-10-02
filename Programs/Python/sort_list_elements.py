l = [1,23,54,56,87,89,96,74,63,12]
print(l)
for i in range(0,len(l)):
    for j in range(0,len(l)-1):
        if l[j+1] < l[j]:
            l[j],l[j+1] = l[j+1],l[j]
        else:
            continue
print(l)

