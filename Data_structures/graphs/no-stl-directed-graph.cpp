#include <iostream>
using namespace std;
//todo::Look into implementing with a bst 

// data struct to store adjacentcy list nodes
struct Node {
    int val;
    Node* next;
};
// data struct to store graph edges
struct Edge {
    int src, dest;
};

class Graph {
    // function to allocate new node of adjency list
    Node* getAdjListNode(int dest, Node* head){
        Node*  newNode = new Node;
        newNode->val = dest;
        // point new node to curr head
        newNode->next = head;
        return newNode;
    }
    int N; // number of node in the graph
    public: 
        // an array of pointers to Node to represesent the adj list
        Node **head;
        // constructor
        Graph(Edge edges[], int n, int N){
            // allocate memory
            head = new Node*[N]();
            this->N = N;

            // initialize head pinter for all vertices
            for(int i=0; i < N; i++)
                head[i] = nullptr;
            // add edges to the directed graph
            for(unsigned i = 0; i < n; i++){
                int src = edges[i].src;
                int dest = edges[i].dest;

                // insert in the begining
            Node* newNode = getAdjListNode(dest, head[src]);
                // point head to new node
            head[src] =newNode;
                // ucomment below for an undirected graph
                // newNode = getAdjListNode(src, head[dest]);
                // head[dest] = newNode;
            }
        }

        // destructor
        ~Graph() {
            for(int i = 0; i < N; i++){
                delete[] head[i];

                delete[] head;
            }
        };

        // print function
        void printList(Node* ptr){
            while(ptr != nullptr){
                cout <<  " -> "<< ptr->val ;
                ptr = ptr->next;
            }
            cout << endl;
        }
};
// graph implentation without use of stls
int main(){
// array if edges in the graph
Edge edges[] =  {
// pairs of x y represent the edges of x and y
{0, 1}, {1, 2}, {2, 0}, {2, 1}, {3, 2}, {4, 5}, {5, 4}, 
};
//num of vertices 
int N = 6;
// calculate the num of edges.
int n = sizeof(edges)/sizeof(edges[0]);
// construct a graph 
Graph graph(edges, n, N);
// print out the adjList representation of the graph
for(int i = 0; i < N; i++){
        //print given vertex
    cout << i << " #";
        //print all it's neighboring vertices.
    graph.printList(graph.head[i]);
}
    return 0;
}