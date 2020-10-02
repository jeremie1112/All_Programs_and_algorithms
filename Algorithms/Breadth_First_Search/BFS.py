# Algorithm To Traverse Through Graph Using BFS
# graph = {Parent_Node : Child_List}
graph = {
  'A' : ['B','C'],
  'B' : ['D', 'E'],
  'C' : ['F','G'],
  'D' : ['H','I'],
  'E' : ['F'],
  'F' : [],
  'G' : ['I'],
  'H' : [],
  'I' : []
}

visited_node = [] # List to keep track of visited nodes.
queue = []     #Initialize a queue

def breadthFirstSearch(visited_node, graph, start_node):
  visited_node.append(start_node)
  queue.append(start_node)

  while queue:
    s = queue.pop(0) 
    print (s, end = " ") 

    for neighbour in graph[s]:
      if neighbour not in visited_node:
        visited_node.append(neighbour)
        queue.append(neighbour)

# Driver Code to call the Function
breadthFirstSearch(visited_node, graph, input("Enter Starting Node: "))

# Outputs the Visited Node from Starting Node to the End, Using BFS
