/*
It is a sorting technique to sort the elements of an array in increasing as well as decreasing order.
This algorithm works by picking the smallest element of the remaining array, i.e if the iterator(i) is at 2 of an array having 5 elements, then the remaining array will be after the index 2,
after positioning the smallest element of the remaining array at the i-th position the iterator moves forward.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
            // To sort in increasing order the condition is arr[j] < arr[minIndex] & to sort in decreasing order the condition is arr[j] > arr[minIndex].
        }
        swap(arr[i], arr[minIndex]);
    }

    for(auto it: arr)
        cout << it << " ";
    cout << endl;
    return 0;
}