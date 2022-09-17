// Converting the whole string into uppercase and lowercase using loop.
// Doing the same with function transform().

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "asdihKMNKNKkdsfJKNKLAZ";
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >='a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << "Whole string in Uppercase is: " << str << endl;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    cout << "Whole string in Lowercase is: " << str << endl;

    string z = "sefmkmksfdsffc";
    transform(z.begin(), z.end(), z.begin(), ::toupper);
    // Transform takes 4 arguments and they are, first the starting address of the srting, the index pointing to the next element after the string ends, the index from where the operation has to start, and last argument is the operation itself.
    cout << z << endl;

    transform(z.begin(), z.end(), z.begin(), ::tolower);
    cout << z << endl;
    return 0;
}