l = [1,12,23,34,45,56,67,78,89,100]
s = l[0]
print("Odd indices: ")
for i in range(1,len(l)):
    if i%2 == 0:
        s += l[i]
    else:
        print("l[",i,"] = ",l[i])
print("\nSum of even indices: ",s)
