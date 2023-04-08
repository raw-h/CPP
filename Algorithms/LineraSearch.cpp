/*
This is a searching algorithm which searches the key element by traversing the whole array from the starting index to the last index.
The time complexity of this algorithm is O(n), i.e linear time complexity.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cin >> key;
    bool flag = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] == key){
            cout << "Key found at " << i + 1 << " position" << endl;
            flag = 1;
            break;
        }
    }
    if(!flag)
        cout << "Key not found in the array." << endl;
    return 0;
}