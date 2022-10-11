import java.util.List;
import java.util.ArrayList;

public class ExampleClass1 {
    public static void main(String[] args) {
        StackPushPopExample stackPushPopExample = new StackPushPopExample(5);

        stackPushPopExample.push(2);
        stackPushPopExample.push(3);
        stackPushPopExample.push(4);
        stackPushPopExample.push(7);
        stackPushPopExample.push(1);
        System.out.println("Topmost Element of the stack: " + stackPushPopExample.peek());
        System.out.println("All Stack Items:");
        
        for (Integer allItem : stackPushPopExample.getAllItems()) {
            System.out.println(allItem);
        }

        stackPushPopExample.pop();
        System.out.println("All Stack Items After popping one item:");
        
        for (Integer allItem : stackPushPopExample.getAllItems()) {
            System.out.println(allItem);
        }
    }
}

class StackPushPopExample {
    private final List<Integer> intStack;

    public StackPushPopExample(int stackSize) {
        intStack = new ArrayList<>(stackSize);
    }

    public void push(int item) {
        intStack.add(0, item);
    }

    public int pop() {
        if (!intStack.isEmpty()) {
            int item = intStack.get(0);
            intStack.remove(0);
            return item;
        } else {
            return -1;
        }
    }

    public int peek() {
        if (!intStack.isEmpty()) {
            return intStack.get(0);
        } else {
            return -1;
        }
    }

    public List<Integer> getAllItems() {
        return intStack;
    }
}
