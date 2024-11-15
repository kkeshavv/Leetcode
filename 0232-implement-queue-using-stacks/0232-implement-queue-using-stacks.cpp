#include <stack>
class MyQueue {
private:
    std::stack<int> stack1; // For pushing elements
    std::stack<int> stack2; // For popping elements

public:
    MyQueue() {
        // Constructor is empty as stacks are automatically initialized
    }

    void push(int x) {
        stack1.push(x); // Push the element onto stack1
    }

    int pop() {
        if (stack2.empty()) { // If stack2 is empty, move elements from stack1 to stack2
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (stack2.empty()) return -1; // If stack2 is still empty, return -1
        int top = stack2.top();
        stack2.pop(); // Remove the top element from stack2
        return top;
    }

    int peek() {
        if (stack2.empty()) { // If stack2 is empty, move elements from stack1 to stack2
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (stack2.empty()) return -1; // If stack2 is still empty, return -1
        return stack2.top(); // Return the top element of stack2
    }

    bool empty() {
        return stack1.empty() && stack2.empty(); // The queue is empty if both stacks are empty
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
