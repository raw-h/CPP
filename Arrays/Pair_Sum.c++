#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int key;
    cin >> key;
    int low = 0;
    int high = n-1;

    while(low < high)
    {
        if (arr[low] + arr[high] == key){
            cout << low + 1 << " " << high+1 << endl;
            return 0;
        }
        else if (arr[low] + arr[high] > key)
            high--;
        else
            low++;
    }

    return 0;
}