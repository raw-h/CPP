#include<bits/stdc++.h>
using namespace std;

void printVecPair(vector<pair<int,int>> k){
    cout << "Size of the vector is: " << k.size() << endl; // v.size() is used to find out the size of the vector and it's time complexity is O(1).
    for(int i = 0; i < k.size(); i++)
        cout << k[i].first << " " << k[i].second << endl;
}

void printVec(vector<int> k){
    cout << "Size of the vector is: " << k.size() << endl; // v.size() is used to find out the size of the vector and it's time complexity is O(1).
    for(int i = 0; i < k.size(); i++)
        cout << k[i] << " ";
    cout << endl;
}

int main(){
    vector<pair<int,int>> v = {{1,2}, {2,3}, {3,4}};
    cout << "Vector of Pair:-"<< endl;
    printVecPair(v);
    vector<pair<int,int>> v1;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v1.push_back({x,y}); // We could've also used v1.push_back(make_pair(x,y)); to insert a pair.
    }
    printVecPair(v1);


    // Array of Vectors
    cout << "Array of Vector:-" << endl;
    int N;
    cin >> N;
    vector<int> v2[N]; // At this time N vectors have been made of size 0.
    for (int i = 0; i < N; i++)
    {
        int q;
        cin >> q;
        for(int k = 0; k < q; k++){
            int a;
            cin >> a;
            v2[i].push_back(a);
        }
    }
    for(int i = 0; i < N; i++)
        printVec(v2[i]);
        

    // Vector of Vectors
    cout << "Vector of Vectors:-" << endl;
    int X;
    cin >> X;
    vector<vector<int>> v3;
    for(int i = 0; i < X; i++){
        int m;
        cin >> m;
        vector<int>temp;
        // v3.push_back(vector<int>()); Now we've inserted an empty vector in v3 which can be accessed below for inputting elements.
        for(int h = 0; h < m; h++){
            int r;
            cin >> r;
            temp.push_back(r);
            // Here we used temp vector because in v3 there was nothing before temp so we couldn't access any vector of vector v3 so it wasn't possible to take input.
            // v3[i].push_back(r); Now we can input elements in it.
        }
        v3.push_back(temp); // If we have the empty vector then we don't need to insert it inside v3 like this the above line is sufficient to carry out the process.
    }
    // v3[0].push_back(10) will insert 10 in the end of the first vector in v3.
    /* Till now the size of v3 is X but if we use
        v3.push_back(vector<int>());
        so it will insert another empty vector at the end of v3 and the size of v3 will be X + 1 now.
    */
    for(int i = 0; i < X; i++) // Here instead of X we can also use v3.size()
        printVec(v3[i]);
    return 0;
}