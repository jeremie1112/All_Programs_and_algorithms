

# Create a stack class
class Stack(object):
    # Constructor
    def __init__(self):
        self.stack = []                             # Initialize the stck by an empty List
        self.numOfItems = 0                         # Initialize the number of items in stack = 0; Stack Index

    # Check if Stack is empty
    def isEmpty(self):
        return self.stack == []                     # If empty, return true else false

    # Push data to Stack
    def push(self, data):
        self.stack.insert(self.numOfItems, data)    # Insert the data at Index "num of items"; Initially, Index = 0
        self.numOfItems += 1                        # Increment Index
        return '{} pushed to Stack'.format(data)

    # Pop data from Stack
    def pop(self):
        self.numOfItems -= 1                         # Decrement the Index to point to top of Stack
        data = self.stack.pop(self.numOfItems)       # Pop out the data from that index
        return '{} removed from Stack'.format(data)

    # Size of stack
    def stackSize(self):
        return len(self.stack)                       # Length of the List/Array is the size of Stack


# Testing
if __name__ == '__main__':

    stack = Stack()

    # Push data to Stack
    print(stack.push(1))
    print(stack.push(2))
    print(stack.push(3))
    print(stack.push(4))

    # Pop data from Stack
    print(stack.pop())
    print(stack.pop())
    print('Stack size: ',stack.stackSize())
    print(stack.pop())
    print('Stack size: ',stack.stackSize())
