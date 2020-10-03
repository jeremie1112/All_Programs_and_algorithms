//Breadth First Search

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

class Graph{
	int n;//number of nodes
	list<int> *adj;//array of linked lists
public:
	Graph(int n){
		this->n=n;
		adj=new list<int>[n];
	}
	void addEdge(int a,int b){
		a--;b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
    void bfs(int c) {
        c--;
		vector<bool> visited(n,0);
        queue<int>q;
        q.push(c);
        while(!q.empty()){
            int front=q.front();
            q.pop();
            visited[front]=1;
            cout<<front+1<<' ';
            for(auto i:adj[front]) {
                if(!visited[i]) {
                    q.push(i);
                }
            }
        }
    }
};

int main(){
	cout << "Enter number of nodes" << endl;
	int n;cin >> n;
	Graph gr(n);

	cout << "Enter number of edges" << endl;
	int e;cin >> e;

	cout << "Enter Edges" << endl;

	for (int i = 0; i < e; ++i)
	{
	 	int a,b;
	 	cin >> a >> b;
	 	gr.addEdge(a,b);
	}

	gr.bfs(1);//dfs from 1

	return 0;
}
