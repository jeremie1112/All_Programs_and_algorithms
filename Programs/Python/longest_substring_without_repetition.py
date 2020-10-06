''' 
Problem :Longest Substring Without Repeating Characters
difficulty level : medium
Given a string s, find the length of the longest substring without repeating characters.

'''
def lengthOfLongestSubstring(s) -> int:
    l = [0]
    d ={}
    for i,j in enumerate(s):
        if j not in d :
            l.append(l[-1] + 1)
        else :
            l.append(min(l[-1]+ 1,i-d[j] ))
        d[j] = i
    #print(l)
    return max(l)

# Main Function
if __name__ == "__main__":
    s =  "abcabcbb" 
    ans = lengthOfLongestSubstring(s)
    print(ans)

