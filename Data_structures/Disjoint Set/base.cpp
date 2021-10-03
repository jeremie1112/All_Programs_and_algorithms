#include<bits/stdc++.h>

using namespace std;

class DisjointSet{
  int n, *parent, *rank;
  
  public:
    DisjointSet(int n)
    {
        this->n = n;
        rank = new int[n];
        parent = new int[n];
        
        for(int i = 0; i < n; i++)
            parent[i] = i;
    }
    
    int find(int i)
    {
        if(parent[i] == i)
            return i;
        else
            return parent[i] = find(parent[i]);
    }
    
    bool find(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
        
        if(xset == yset)
            return true;
        else
            return false;
    }
    
    void Union(int x, int y)
    {
        int xset = find(x);
        int yset = find(y);
        
        if(xset == yset)
            return;
            
        int xrank = rank[xset];
        int yrank = rank[yset];
        
        if(xrank < yrank)
        {
            parent[xset] = yset;
        }
        else if(xrank > yrank)
        {
            parent[yset] = xset;
        }
        else
        {
            parent[xset] = yset;
            rank[yset] += 1;
        }
    }
};

int main()
{
    int n, q, t, x, y;
    
    scanf("%d %d", &n, &q);
    
    DisjointSet dis(n + 1);
    
    while(q--)
    {
        scanf("%d %d %d", &t, &x, &y);
        
        if(t == 0)
            dis.Union(x, y);
        else
        {
            if(dis.find(x, y))  
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    
    return 0;
}