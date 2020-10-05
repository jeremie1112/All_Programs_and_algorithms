import java.util.*;
import java.lang.*;
import java.io.*;



//structure of the graph is source->(destination,weight).


public class WeightedGraph{
	static Map<Integer,List<Pair>>edges;
	WeightedGraph(){
		this.edges=new HashMap<>();
	}
	static void addEdgeUtils(int start,int end,int weight){
		if(edges.get(start)==null){
			Pair pair= new Pair(end,weight);
			List<Pair>edgesList= new LinkedList<>();
			edgesList.add(pair);
			edges.put(start,edgesList);
		}
		else{
			Pair pair= new Pair(end,weight);
			edges.get(start).add(pair);
		}
	}
	static void addEdge(int start,int end,int weight,boolean isBidirectional){
		addEdgeUtils(start,end,weight);
		if(isBidirectional){
			addEdgeUtils(end,start,weight);
		}
	}
	static void printGraph(){
		for(Integer vertice:edges.keySet()){
			System.out.print(vertice+"->");
			for(Pair neighbours:edges.get(vertice)){
				System.out.print("("+neighbours.first+","+neighbours.second+")");
			}
			System.out.println();
		}
		System.out.println();
	}
	public static void main(String[] args) {
		WeightedGraph graph=new WeightedGraph();
		graph.addEdge(1,2,3,true);
		graph.addEdge(1,5,4,true);
		graph.addEdge(2,3,8,true);
		graph.addEdge(2,5,5,true);
		graph.addEdge(2,4,7,true);
		graph.addEdge(3,4,9,true);
		graph.addEdge(4,5,6,true);
		graph.printGraph();
	}
}

