#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    // arr is a constant pointer.
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr  << " ";
        ptr++;
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << " ";
    }
    // Here arr is an indexing pointer. 
    cout << endl;
    return 0;
}