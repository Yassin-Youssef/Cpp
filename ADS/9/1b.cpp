#include <stack>
#include <iostream>
using namespace std;
template<typename T>
class QueueUsingStacks {
private:
    stack<T> s1;
    stack<T> s2;
public:
    void enqueue(T x) {
        s1.push(x);
    }

    T dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        if (s2.empty()) {
            cout << "empty" << endl;
            return T();
        }

        T val = s2.top();
        s2.pop();
        return val;
    }

    bool isEmpty() {
        return s1.empty() && s2.empty();
    }
};
int main() {
    QueueUsingStacks<int> q;
    cout << "enqueuing 10, 20, 30" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << "dequeueing" << endl;
    cout << "dequeued " << q.dequeue() << endl;
    cout << "dequeued " << q.dequeue() << endl;
    cout << "enqueuing 40" << endl;
    q.enqueue(40);
    cout << "dequeueing" << endl;
    cout << "dequeued " << q.dequeue() << endl;
    cout << "dequeued " << q.dequeue() << endl;
    cout << "dequeued " << q.dequeue() << endl;
    return 0;
}
