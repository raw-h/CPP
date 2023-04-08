#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < size; i+=2){
        int temp = arr[i];
        if(i + 1 < size){
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(auto it: arr)
        cout << it << " ";
    cout << endl;
    return 0;
}