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
    int p;
    cin >> p;
    sort(v1.begin(), v1.end());
    vector<vector<int>> answer;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v1[i] + v1[j] < p)
            {
                for(int k = j + 1; k < n; k++){

                    if((v1[i] + v1[j] + v1[k]) == p){
                    vector<int> temp;
                    temp.push_back(v1[i]);
                    temp.push_back(v1[j]);
                    temp.push_back(v1[k]);
                    sort(temp.begin(), temp.end());
                    answer.push_back(temp);
                    }
                }
            }
        }
    }
    sort(answer.begin(), answer.end());
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
            cout << answer[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}