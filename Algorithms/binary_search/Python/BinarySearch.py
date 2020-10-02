def BinarySearch(l,target):
    # l->sorted list target->element to find
    Start=0
    Last=len(l)
    m=1
    Middle = 0
    print("Last {} M:{} START:{}".format(Last, Middle, Start))
    print("#Begin")

    while(Start<=Last):
        Middle=int((Last+Start)/ 2)
        print("Last {} M:{} START:{} mval".format(Last,Middle,Start))
        if(target<l[Middle]):
            Last=Middle-1
            print("Last {} M:{} START:{} target<l[Middle]".format(Last, Middle, Start))
        elif(l[Middle]<target):
            Start = Middle + 1
            print("Last {} M:{} START:{} l[Middle]<target".format(Last, Middle, Start))
        else:
            m = 0
            return Middle

    if(m==1):
        return -1

