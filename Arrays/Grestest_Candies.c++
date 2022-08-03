#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int maximum_no_of_candies = INT_MIN;
    for (int i = 0; i < n; i++)   
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        maximum_no_of_candies = max(maximum_no_of_candies, arr[i]);
    
    cout << "Maximum number of candies are " << maximum_no_of_candies << endl;
    return 0;
}