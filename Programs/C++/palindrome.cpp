
// Program to check if a  given string can be converted into a palindrome or not 

// Input : A string in lowercase 

// Output : indices of characters to be removed to make the string a palindrome
// if no indices can be removed , i.e if the string itself is a palindrome then return -1 

// Overall time complexity : O(n) 

#include<bits/stdc++.h>
#include<string>
#include<string.h>
#define ll long long int  
using namespace std;
void cp(){
    string s;                           // the string is taken as an input 
    cin>>s;
    ll n = s.length(),l=0,r=n-1;        // l is the leftmost index and r is the rightmost index  initially 
    while(l < r){
        if(s[l]==s[r]){                 // in case of a match we tend to go on 
            l++; r--;
        }
        else{
            break;                      // if not a match then we break from the loop 
        }
    }
    
    if(l>=r){
        cout<<-1<<endl;                // if the two variables have crossed each other then it means that string is already a palindrome
        return ;
    }

    int x = l;                          // saving the left and right indices 
    int y = r;

    l++;
    ll a=1;                            // counting the left sidefault 
    while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
            a = 0;
            break;
        }
    }
    if(a){
        cout<<x<<endl;              // if there is a left side fault then the index to be removed is the value in x 
        return;
    }
    else{
        cout<<y<<endl;              // if no left side fault then it is y to be removed 
        return;
    }
    
}

int main(){
    ll q;cin>>q;                    // q is the query for which q strings are given and their outputs are verified 
    while(q--){
        cp();
    }
    return 0;
}


// link to the input and output :  https://rextester.com/YDQSP30144 