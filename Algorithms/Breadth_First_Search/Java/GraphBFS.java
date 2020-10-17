package Algorithms.Breadth_First_Search.Java;

import java.util.*;

public class GraphBFS{

    //Create a GraphBFS with adj list implementation with number of Vertices 
    public int numberVertices;
    public List<Integer> adj[];

    public GraphBFS(int n) {
        this.numberVertices = n;
        this.adj = new LinkedList[n];
        for (int i = 0; i < n; i++) {
            adj[i] = new LinkedList<Integer>();
        }
    }

    public void addEdge(int vertex, int edge) {
        adj[vertex].add(edge);
    }

    public void BFS(int startingVertex) {
        //Initialize visited and queue to begin BFS
        boolean[] visited = new boolean[numberVertices];
        Queue<Integer> q = new LinkedList<>();

        //Add starting vertex
        q.add(startingVertex);
        visited[startingVertex] = true;

        //Go through queue adding vertex edges until everything is visited and print out order visited
        while (!q.isEmpty()) {
            int current = q.poll();
            System.out.println(current + " ");
            for (int e : adj[current]) {
                if (!visited[e]) {
                    q.add(e);
                    visited[e] = true;
                }

            }
        }
    }

    public static void main(String[] args) {
        GraphBFS graph = new GraphBFS(6);
        graph.addEdge(0, 5);
        graph.addEdge(0, 1);
        graph.addEdge(1, 3);
        graph.addEdge(1, 2);
        graph.addEdge(2, 4);
        graph.addEdge(2, 5);
        graph.addEdge(3, 2);
        graph.addEdge(4, 5);
        graph.addEdge(5, 0);

        graph.BFS(4);

    }
}
