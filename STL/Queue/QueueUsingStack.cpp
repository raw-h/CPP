#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    stack<int> s1;
    stack<int> s2;
    int data;
    
    void q_push(int data){

        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(data);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int q_pop(){
        if(s1.empty())
            return -1;
        else{
            int val = s1.top();
            s1.pop();
            return val;
        }
    }
};

int main(){

    Queue q1;
    q1.q_push(10);
    q1.q_push(20);
    q1.q_push(30);
    q1.q_push(40);

    cout << q1.q_pop() << endl;
    cout << q1.q_pop() << endl;
    cout << q1.q_pop() << endl;
    cout << q1.q_pop() << endl;

    cout << q1.q_pop() << endl;
    return 0;
}