#include <bits/stdc++.h> 
using namespace std;
void solve(stack<int>&inputStack, int count, int size){
   if(count == size/2){
      inputStack.pop();
      return;
   }
   int val = inputStack.top();
   inputStack.pop();
   solve(inputStack, count+1, size);
   inputStack.push(val);
}
void deleteMiddle(stack<int>&inputStack, int N){
   int count = 0;
   solve(inputStack, count, N);
}

void print(stack<int>inputStack){
    while(!inputStack.empty()){
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;
}
int main(){
    stack<int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }
    print(st);
    deleteMiddle(st, n);
    print(st);
    return 0;
}