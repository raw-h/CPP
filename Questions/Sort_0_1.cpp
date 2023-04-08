#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        // if(v1[i] == 1 && v1[j] == 0){
        //     swap(v1[i], v1[j]);
        //     i++;
        //     j--;
        // }
        // else if(v1[i] != 1)
        //     i++;
        // else if(v1[j] != 0)
        //     j--;
        // else{
        //     i++;
        //     j--;
        // }

        while (v1[i] == 0)
            i++;
        while (v1[j] == 1)
            j--;
        if (i < j)
        {
            swap(v1[i], v1[j]);
            i++;
            j--;
        }
    }

    for (auto it : v1)
        cout << it << " ";
    cout << endl;
    return 0;
}