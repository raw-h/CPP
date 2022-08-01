#include<iostream>
using namespace std;

int fib(int a){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (int i = 1; i <= a; i++)
    {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
    return 0;
}

int main(){
    int n;
    cin >> n;
    fib(n);
    return 0;
}