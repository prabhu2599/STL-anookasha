#include <stack>
#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> s) {
    cout<<endl;
    while(!s.empty()) {
        cout<<s.back()<<" ";
        s.pop();
    }
}

void printStack(stack<int> s) {
    cout<<endl;
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
}

void stackKaro() {
    stack<int> cstk;
    cstk.push(5);
    cstk.push(6);
    cstk.push(5);
    cstk.push(6);
    printStack(cstk);
}

void queueKaro() {
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(5);
    q.push(6);
    printQueue(cstk);
}

int main() {
    stackKaro();
    queueKaro();
    cout<<endl;
    return 69;
}
