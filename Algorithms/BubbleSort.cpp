/*
This is another sorting technique to sort the elements in an increasing ro decreasing manner, in this technique we sort the current element with the element to it's immediate right and if
the next element is lesser than the current element swapping is done otherwise nothing is done.
There are (n-1) rounds after which the completely sorted array is achiecved.
In this sorting technique in the i-th round we make sure that the i-th largest element reaches it's correct position.

The space complexity is constant i.e O(1) ince we are not using any new data structure or any variable.

The time complexity is O(n^2), and in best case the complexity will be O(n) (if the code is optimised), and O(n^2) in the worst case.

Can this be optimised more?
Yes, if any round exists where no swaps were performed, then it means all the next elements were greater than the previous elements whic means the array was already sorted,
in that case we will break out of the loop.

Is this sorting technique stable?
Yes it is stable.

This algorithm is also an In_place algorithm, i.e it does not take any extra space for it's processing it swaps the elements of the array and doesn't store them anywhere else.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
            // The above if condition is for sorting in increasing order, but if we had to sort the array in decreasing order we just have to use < instead of > in the above condition.
        }
        if(!swapped)
            break;
    }

    for(auto it : arr)
        cout << it << " ";
    cout << endl;
    return 0;
}