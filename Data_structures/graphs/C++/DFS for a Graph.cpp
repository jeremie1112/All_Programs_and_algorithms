

#include <bits/stdc++.h>

using namespace std;
void DFS(int u,int A[][5]){
    static int visited[5]= {0};
    if(visited[u]==0){
        cout<<u<<" " ;
        visited[u]=1 ;
        
    }
    
    for(int v=0;v<5;v++){
        if(A[u][v]==1 && visited[v]==0){
            DFS(v, A) ;
        }
    }
}


int main()
{
    int A[5][5] ={{0,1,1,1,0},{0,0,0,0,0},{0,0,0,0,1},{0,0,0,0,0},{0,0,0,0,0}} ;
    int visited[5] ={0} ;
    DFS(0,A) ;
    
    
}
