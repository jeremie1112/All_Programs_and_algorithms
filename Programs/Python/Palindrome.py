#Python program whether the string is palindrome or not!!
##Palindrome means --> reversed and the original strings are same eg--> madam

# function which return reverse of a string
def isPalindrome(s):
    return s == s[::-1]
 
ans = isPalindrome(input("enter the string"))
 
if ans:
    print("Yes")
else:
    print("No")
