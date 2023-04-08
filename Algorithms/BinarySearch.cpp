/*
This is also a searching algorithm, and it also has one condition given below.
    This searching algorithm works on monotonic data set of elements, monotonic mens either the elements are in a non-decreasing manner
    or they are in monotonic non-increasing order.

There are mainly 3 steps involved in this algorithm:-
    First step is to take the middle part of the array and check whether it is the key element to be searched or not, if yes then return,
        but if the element is not equal to mid, then we have to decide with part we should go to right or left.
    Second, we will decide the part we have to go, we will comaper the element with the middle value if the mid value is smaller than the element
        then we will go towards the right part, but if the element is smaller than mid then we will go towards the left part of the array.
    Third, we will do this in a loop and we will keep on doing it untill we reach to a point where the middle value is equal to the key element, 
        and then we will return 1, but if no element is present we will return 0.

Time complexity of this algorithm is O(logN), this is because every time the size of inpur gets divided by increasing power of 2.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++)
        cin >> array[i];
    int low = 0, high = n - 1, mid, key;
    cin >> key;
    bool flag = 0;
    while(low <= high){
        mid = low/2 + high/2;
        if(array[mid] == key){
            flag = 1;
            cout << "Element found at " << mid + 1 << " position." << endl;
            break;
        }
        else if(array[mid] < key)
            low = mid + 1;
        else if(array[mid] > key)
            high = mid - 1;
    }
    if(!flag)
        cout << "Element was not present." << endl;
    return 0;
}