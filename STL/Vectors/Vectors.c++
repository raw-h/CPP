#include<bits/stdc++.h>
using namespace std;


// Function for printing the vector:-
// void printVec(vector<int> k){
//     cout << "Size of the vector is: " << k.size() << endl; // v.size() is used to find out the size of the vector and it's time complexity is O(1).
//     for(int i = 0; i < k.size(); i++)
//         cout << k[i] << " ";
//     cout << endl;
// Since this function recieves v as copy if we made any changes in this vector then the changes will not be made in the actual vector that is passed to this function.
// And this copying of vector is a really expensive operation that's why we should paas the reference of the vector into the function using &(vector_name).
// }

int main(){
    vector<int> v; //When declared the vector it's size was 0, and it's size keeps on increasing as we add elements into it.
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x); //To insert value in a vector we use push_back function, it inserts the value at the end of the vector.
    }

    vector<int> v1(7); // It will be initialised by 0.
    // vector<int> v2(7, 10); Here the first 7 elements of v2 are filled with 10 (i.e the value we passed with the size at the time of declaring the empty vector).
    v1.push_back(888);
    cout << "Size of the V1 vector is: " << v1.size() << endl;
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;
    // v1.pop_back(); To pop the last element of the vector.

    vector<int> v2 = v; // Similarly we could've passed v by reference here so that copy isn't created and the actual vector is passed into this command, as &v2.
    v2.push_back(20);
    cout << "Size of the V2 vector is: " << v2.size() << endl;
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    // We pushed 20 in v2 and the below code for printing v is to show that any changes made in v2 will not effect v.
    cout << "Size of the V vector is: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    vector <string> v3;
    int p;
    cout << "Input P" << endl;
    cin >> p;
    for(int i = 0; i < p; i++){
        string z;
        cin >> z;
        v3.push_back(z);
    }

    cout << "Size of the V3 vector is: " << v.size() << endl;
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << endl;
    return 0;
}