/*
It is a sorting technique to sort the elements of an array in increasing as well as decreasing order.
This algorithm works by picking the smallest element of the remaining array, i.e if the iterator(i) is at 2 of an array having 5 elements, then the remaining array will be after the index 2,
after positioning the smallest element of the remaining array at the i-th position the iterator moves forward.

The space complexity for this sorting is O(1) i.e, Constant as we are only allocation spaces for variables and no other data structure.
The time complexity for this sorting is O(n^2), and this is also both the best case and worst case complexity of this algorithm.

Use case:- This algortihm is really useful when the size of the input array/vector/list is small, and also when memory constraints are present.
It uses the minimum number of swaps among all the sorting algorithms.

If we talk about whether the algorithm is stable or unstable, then it is unstable as it does not preserve the order when countered by more than 1 same elements.

Optimised Selection Sort?
Yes, selection sort can be further optimised in which the time would be reduced by 50% and it can be done by sorting from the 2 ends by taking the mix and max value simultaneously.
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