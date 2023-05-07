/*
In this sorting technique we take a particular element and find it's correct position in the sorted array by comparisons and place it into that position.
This technique can be used to sort in both ways ascending and descending orders.
The key difference in this sorting from the previous sorting techniques is that we are shifting elements and not swapping.
Suppose the position of the 5th element of an array of size 10 was 2nd then the elements from the 2nd element to the 4th will be shifted 1 space to the right and then the
5th element will be place at the 2nd position.

This is an adaptable algorithm, i.e if it encounters a sorted array meanwhile sorting it will not go any further.
This is also a stable algorithm.
Works well on small number of testcases.

Space complexity of this algorithm is O(1) as we only create a single variable, and no other type of space is used.
Time complexity of this algorithm is O(n^2) as it might make n comparisons of n rounds so sum of all of them will be n^2, and for best case it will be O(n),
and for the worst case it will be O(n^2).
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

    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int temp = arr[i];
        while(j >= 0)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
                // The above condition is for sorting the array in ascending order and for descending order the condition would be arr[j] < temp.
            else
                break;
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;   
    return 0;
}