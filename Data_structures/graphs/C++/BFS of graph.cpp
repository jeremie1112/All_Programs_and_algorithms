

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[5][5] ={{0,1,1,1,0},{0,0,0,0,0},{0,0,0,0,1},{0,0,0,0,0},{0,0,0,0,0}} ;
     queue<int> q ;
    int visited[5]={0} ;
     int u ;
     cout<<"0," ;
     visited[0]= 1;
     
     q.push(0) ;
     
     while(!q.empty()){
         u = q.front() ;
         q.pop() ;
         
         for(int v =0 ;v<5;v++){
             if(A[u][v]==1 && visited[v]==0){
                 cout<<v<<"," ;
                 visited[v]=1 ;
                 q.push(v) ;
             }
         }
     }
    
}
