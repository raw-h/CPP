#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    // cout << "Input the array size: " << endl;
    cin >> n;

    int arr[n];
    // cout << "Input the array elements: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int students;
    // cout << "Input the number of students: " << endl;
    cin >> students;

    int search_space_UL = 0;
    for (int i = 0; i < n; i++)
        search_space_UL += arr[i];
    
    int final_ans = 0;
    int low = 0, high = search_space_UL, mid;
    
    while (low <= high)
    {
        bool flag = 0;
        mid = low + (high - low) / 2;
        int stu_count = 1;
        int page_sum = 0;
    
        for(int i = 0; i < n; i++)
        {
            if(page_sum + arr[i] <= mid)
                page_sum += arr[i];
            else{
                stu_count++;
                if(stu_count > students || arr[i] > mid){
                    flag = 1;
                    break;
                }
                page_sum = arr[i];
            }
        }
    
        if(!flag){
            final_ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        // cout << "Final ans inside loop = " << final_ans << endl;
        // cout << "Student count = " << stu_count << endl;
    }
    
    cout << final_ans << endl;
    return 0;
}