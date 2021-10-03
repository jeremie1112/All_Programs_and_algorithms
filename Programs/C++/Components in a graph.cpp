#include<bits/stdc++.h>
using namespace std;

int find_set(int x, vector <int> &r) {
    if (r[x] == x) return(x);
    else return(find_set(r[x],r));
}

int main() {
    int n;
    cin >> n;
	vector <int> count(2*n+1);
    vector <int> root(2*n+1);
    
    for (int i = 1; i <= 2*n; i++) {
        root[i]=i;
        count[i]=1;
    } 
	
    for (int i = 0;i < n; i++) {
        int p,q;
        cin >> p >> q;
        int p_root = find_set(p,root);
        int q_root = find_set(q,root);       
        if (p_root == q_root) continue;        
        root[q_root] = p_root;
        count[p_root] += count[q_root];
        count[q_root] = 0;
    }    
	
    int minimum = 2*n+1;
    int maximum = 0;    
    for (int i = 1;i <= 2*n; i++) {
        if (count[i] > 1 && count[i] < minimum) 
			minimum = count[i];
        if (count[i] > maximum) 
			maximum = count[i];
    }   
    cout << minimum << " "  << maximum;
    
    return 0;
}