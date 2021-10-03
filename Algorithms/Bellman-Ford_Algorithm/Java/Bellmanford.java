import java.io.*;
import java.util.*;

class Bellmanford
{
    public static void BellmanFord(int graph[][],int source) {
        int vertex = graph.length;
        int[] distance = new int[vertex];
        distance[source] = 0;
        boolean negativeCycleExists = false;

        // relaxing the edges vertex-1 times
        for(int i = 0; i<vertex - 1; i++) {
            for(int j = 0; j < graph.length;j++) {
                int u = graph[j][0];
                int v = graph[j][1];
                int weight = graph[j][2];

                if(distance[v] > distance[u]+weight) {
                    distance[v] = distance[u]+weight;
                }
            }
        }

        // relaxing the edges one more time
        for(int j = 0; j < graph.length; j++) {
        	int u = graph[j][0];
            int v = graph[j][1];
            int weight = graph[j][2];

            // if we are able to relax further, then negative cycle exists in the graph
            if(distance[v] > distance[u] + weight) {
            	negativeCycleExists = true;
            }
        }

        if(negativeCycleExists)
        System.out.println("Negative cycle detected");

        else
        System.out.println("No negative cycle detected");
    }

    public static void main(String[] args) throws IOException
    {
        // graph for negative cycle
        int graph[][] = { { 0, 1, 1 }, { 1, 2, 2 },
                         { 2, 3, 3 }, { 3, 4, -3 },
                         { 4, 1, -3 } };

        // graph for non negative cycle
        // int graph[][] = { { 1, 2, 3 }, { 1, 3, 2},
        //                   { 1, 4, 2 },{ 3, 2, 5 },
        //                   { 3, 1, 1 },{ 4, 3, -3 } };

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter source vertex");
        int source = sc.nextInt();

        BellmanFord(graph,source);
    }
}