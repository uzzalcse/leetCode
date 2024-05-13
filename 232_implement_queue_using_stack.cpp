
#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> stk1, stk2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(!stk1.empty()) {
            while(!stk1.empty()) {
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        stk1.push(x);
        if(!stk2.empty()) {
            while(!stk2.empty()) {
                stk1.push(stk2.top());
                stk2.pop();
            }
        }
    }
    
    int pop() {
        int temp=stk1.top();
        stk1.pop();
        return temp;
    }
    
    int peek() {
        return stk1.top();
    }
    
    bool empty() {
        return stk1.empty();
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

int main() {
    MyQueue *obj=new MyQueue();
    obj->push(5);
    obj->push(2);
    obj->push(3);
    cout<<obj->peek();
    cout<<obj->pop();
    cout<<obj->pop();
    cout<<obj->pop();
}