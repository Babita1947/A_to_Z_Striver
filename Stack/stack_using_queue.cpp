//225. Implement Stack using Queues
#include<bits/stdc++.h>
using namespace std;

class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        int del_front = q1.front();
        q1.pop();
        //push back
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return del_front;
    }
    
    
    int top() {
        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();

        }
        int del_front = q1.front();
        q2.push(q1.front());
        q1.pop();
        
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return del_front;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */