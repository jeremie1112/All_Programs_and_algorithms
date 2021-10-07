# Code by : https://github.com/MaxTronn

# This program creates a Circular Queue and displays it
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class CircularQueue:
    def __init__(self):
        self.front = None
        self.rear = None

# This function adds elements to the circular queue
def enqueue(queue, item):
    tempnode = Node(item)
    tempnode.data = item

    if queue.front is None:
        queue.front = tempnode
    else:
        queue.rear.next = tempnode

    queue.rear = tempnode
    queue.rear.next = queue.front

# This function prints elements of the circular queue
def printQueue(queue):
    tempnode = queue.front
    print("Elements in Circular Queue are: ",
                                   end = " ")
    while tempnode.next != queue.front:
        print(tempnode.data, end = " ")
        tempnode = tempnode.next
    print(tempnode.data)


#Driver Code
queue = CircularQueue()

enqueue(queue, 20)
enqueue(queue, 45)
enqueue(queue, 77)
enqueue(queue, 100)

printQueue(queue)