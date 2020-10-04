#include<iostream> 
#include <list> 

using namespace std; 

class Graph 
{ 
	int V; 

	list<int> *adj; 
public: 
	Graph(int V); 

	
	void addEdge(int v, int w); 

	
	void BFS(int s); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 
} 

void Graph::BFS(int s) 
{ 
	
	bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 


	list<int> queue; 

	
	visited[s] = true; 
	queue.push_back(s); 

	
	list<int>::iterator i; 

	while(!queue.empty()) 
	{ 
		
		s = queue.front(); 
		cout << s << " "; 
		queue.pop_front(); 

		
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		{ 
			if (!visited[*i]) 
			{ 
				visited[*i] = true; 
				queue.push_back(*i); 
			} 
		} 
	} 
} 


int main() 
{ 
    cout<<"Enter The number of nodes: ";
    
    int n;
    cin>>n;
    cout<<"Enter the number of edges: ";
    int e;
    cin>>e;
	Graph g(n); 
	cout<<"Enter all the edges by entering the two vertices connected: ";
	for(int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		g.addEdge(a,b);
	}
     cout<<"Enter the vertex about which BFS is to be performed: ";
     int vertex;
     cin>>vertex;

	cout << "Following is Breadth First Traversal ";
		
	g.BFS(vertex); 

	return 0; 
} 

