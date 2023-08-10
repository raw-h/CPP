#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeQueue(queue<int> &q)
{
    stack<int> s1;
    stack<int> s2;

    vector<int> ans;

    int n = q.size();
    int f_half = n / 2;

    for (int i = 0; i < f_half; i++)
    {
        s1.push(q.front());
        q.pop();
    }

    for (int i = 0; i < f_half; i++)
    {
        s2.push(s1.top());
        s1.pop();
    }

    int x = s2.size();
    for (int i = 0; i < x; i++)
    {
        ans.push_back(s2.top());
        s2.pop();
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}

int main()
{
    stack<int> s1;
    stack<int> s2;

    queue<int> q;

    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    q.push(19);
    q.push(20);
    q.push(21);

    int n = q.size();
    int f_half = n/2;
    int s_half = n - f_half;

    cout << "First half = " << f_half << endl;
    cout << "Second half = " << s_half << endl;
    for(int i = 0 ; i < f_half; i++){
        s1.push(q.front());
        q.pop();
    }

    for(int i = 0; i < f_half; i++){
        s2.push(s1.top());
        s1.pop();
    }

    int x = s2.size();
    for(int i = 0; i < x; i++){
        q.push(s2.top());
        s2.pop();
        q.push(q.front());
        q.pop();
    }

    if(n % 2 != 0){
        q.push(q.front());
        q.pop();
    }
    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    cout << q.front() << " ";
    q.pop();

    return 0;
}