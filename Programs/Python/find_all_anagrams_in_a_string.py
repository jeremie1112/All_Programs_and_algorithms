'''
Python Program to Find All Anagrams of a given String in another String
''' 
# Given a string s and a non-empty string p, the function finds all the start indices of p's anagrams in s.
# Length of both strings s and p should not be larger than 20,100.
def findAnagrams(s, p):
    ans = [] 
    m = len(p) 
    n = len(s)
    s = s.lower()
    p = p.lower()
    if m>n:
        return ans
    countW = [0]*256
    countP = [0]*256
    for i in range(m):
        countW[ord(s[i])]+=1
        countP[ord(p[i])]+=1
    for i in range(m,n):
        if(countW==countP):
            ans.append(i-m)
        countW[ord(s[i])]+=1
        countW[ord(s[i-m])]-=1
    
    if countW==countP:
        ans.append(n-m)
        
    return ans

# Main Function
if __name__ == "__main__":
    s =  "abab" 
    p =  "ab"
    ans = findAnagrams(s,p)
    if ans:
        print('Start Indices:',ans) # Start Indices: [0, 1, 2]
    else:
        print('Not Found')