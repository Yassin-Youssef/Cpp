#include <iostream>
using namespace std;
template<typename T>
class Stack {
private:
    struct StackNode {
        T data;
        StackNode* next;
    };
    StackNode* top;
    int size;
    int current_size;
public:
    void push(T x) {
        if (size != -1 && current_size == size) {
            cout << "stack is full" << endl;
            return;
        }
        StackNode* new_node = new StackNode{x, top};
        top = new_node;
        current_size++;
    }
    T pop() {
        if (isEmpty()) {
            cout << "stack is empty" << endl;
            return T();
        }
        T value = top->data;
        StackNode* temp = top;
        top = top->next;
        delete temp;
        current_size--;
        return value;
    }
    bool isEmpty() {
        return top == nullptr;
    }
    Stack(int new_size) {
        top = nullptr;
        size = new_size;
        current_size = 0;
    }
    Stack() {
        top = nullptr;
        size = -1;
        current_size = 0;
    }
};
int main() {
    cout << "Stack with max size 3:" << endl;
    Stack<int> myStack(5);
    myStack.push(10);
    myStack.push(20);
    myStack.push(40);
    myStack.push(60);
    myStack.push(80);
    myStack.push(100);
    cout << "popping elements" << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl; 
    cout << myStack.pop() << endl;
    cout << "\nunlimited size stack" << endl;
    Stack<string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    cout << strStack.pop() << endl;
    cout << strStack.pop() << endl;
    cout << strStack.pop() << endl;
    return 0;
}