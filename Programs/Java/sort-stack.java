import java.util.Random;
import java.util.Stack;

/**
 * Problem: Given a stack of integers, create a
 * function that sorts it in-place by using one
 * additional Stack and no other data structures.
 * The smallest value must be at the top of the Stack.
 *
 * Author: AnxietyMedicine (GitHub)
 */
public class SortingAStack {

    // Sorts a Stack using Insertion Sort
    // (Auxiliary Stack is needed)
    public static void sortStack(Stack<Integer> stack) {
        Stack<Integer> tempStack = new Stack<>();

        while (!stack.isEmpty()) {
            int poppedElement = stack.pop();
            while (!tempStack.isEmpty() && poppedElement < tempStack.peek()) {
                stack.push(tempStack.pop());
            }
            tempStack.push(poppedElement);
        }

        // Move all items of tempStack to original
        while (!tempStack.isEmpty()) {
            stack.push(tempStack.pop());
        }
    }

    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        Random random = new Random();

        final int NUM_ELEMENTS = 10;
        final int MAX = 10;
        final int MIN = -10;

        // Generate random ints and push them to the Stack
        for (int i = 0; i < NUM_ELEMENTS; i++) {
            int randomInt = random.nextInt((MAX - MIN) + 1) + MIN;
            s.push(randomInt);
        }

        System.out.println("Original Stack: " + s);
        sortStack(s);
        System.out.println("\nSorted Stack: " + s);
    }
}
