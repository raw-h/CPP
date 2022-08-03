#include<bits/stdc++.h>
using namespace std;

void sum_of_arr(){
    int size; 
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum = sum + arr[i];
    cout << "Sum of the array = " << sum << endl;
}
int main(){
    sum_of_arr();
}