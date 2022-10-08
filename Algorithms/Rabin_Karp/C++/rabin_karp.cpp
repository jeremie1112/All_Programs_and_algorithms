#include<bits/stdc++.h>
using namespace std;

int getHash(string str, int d) {
    int hash_value = 0;
    
    int i = str.length() - 1;
    for(char c:str){
        hash_value += (c - 'a' + 1)* pow(d, i);
        i--;
    }
    return hash_value;
}
/*
        1. Get the hash value of the first window using the formula
            t(i+1) = d * (t(i) - txt[i] * d^(m-1)) + txt[i + m]
                    t(i) -----> hash value of the window-i
                    txt[i] ---> i th character in the txt
                    d --------> Some constant integer
        2. Use the rolling hash formula for the hash function to get the hash value of the next window
    */
void rabin_karp(string txt, string pat) {
    int d = 5, p = getHash(pat, d), t = getHash(txt.substr(0, pat.length()), d);

    if(p == t) {
        cout << 0 << " ";
    }

    for(int i = 1; i <= txt.length() - pat.length(); i++) {
        
        t = d*(t - (txt[i-1] - 'a' + 1)*pow(d, pat.length()-1)) + (txt[i + pat.length() - 1] - 'a' + 1);
        
        if(p == t) {
            cout << i << " ";
        }
    }

    // cout << p << " " << t << "**" << endl;
}

int main() {
    
    string txt, pat;
    cin >> txt;
    cin >> pat;
    
    // cout << getHash(pat, 5) << endl;
    rabin_karp(txt, pat);
    
    return 0;
}