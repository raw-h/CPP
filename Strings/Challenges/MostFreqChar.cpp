// We have to return the most frequent character with it's count as well.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "asdddddfghjklkjhgfdsasdfghjkjhgfdsasdfgfdsasdssdsasd";
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
        freq[s[i] - 'a']++;
    
    int maxF = INT_MIN;
    char ans = 'a';
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] > maxF){
            maxF = freq[i];
            ans  = i + 'a';
        }
    }
    cout << maxF << " " << ans << endl;
    return 0;
}