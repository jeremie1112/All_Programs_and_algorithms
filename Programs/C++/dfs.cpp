//Depth First Search

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

	void dfs(int c,vector<bool> &visited){
		visited[c]=1;

		for(auto &x:adj[c]){
			if(visited[x])continue;
			dfs(x,visited);
		}
		cout << c+1 << endl;
	}

	void dfs(int c){
		c--;
		vector<bool> visited(n,0);

		dfs(c,visited);
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

	gr.dfs(1);//dfs from 1

	return 0;
}