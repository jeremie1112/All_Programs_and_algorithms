def BinarySearch(arr,x):
    start=0
    end=len(arr)-1
    mid=0
    while start<=end:
        mid=(start+end)//2
        if arr[mid]==x:
            return mid
        elif arr[mid]>x:
            end=mid-1
        else:
            start=mid+1
    return -1
 
print("Enter the list :")
arr=list(map(int,input().split()))
print("Enter the element to be searched: ")
x=int(input())
result=BinarySearch(arr,x)
if result!=-1:
    print("Element found! On index : ",str(result))
else:
    print("Sorry, element not found in the array provided.")