#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;

int main(){
    // String is a part of STL. STL is Standard Template Library. It has many containers.


    // 1.Append.
    // 2.Traversal.
    // 3.Clear.
    // 4.Compare.
    // 5.Empty.
    // 6.Erase.
    // 7.Find.
    // 8.Insert.
    // 9.Length / Size.
    // 10.Substr.
    // 11.Stoi.
    // 12.Tostring.
    // 13.Sort.         This function is inside algorithm header file.

    string s1 = "fam";
    string s2 = "ily";
    /* There are 2 ways to append strings.
            1.Which changes one of the string, the string that stores the final result.
            2.Just output both the string with + sign between them.
    */
    cout << s1 + s2 << endl; // This outputs both the strings together whithout ca=hanging their original identity.
    
    s1.append(s2);
    cout << s1 << endl; // This changes s1. Now s1 = family.


    // String's characters can be accessed just like an array.
    cout << s1[2] << endl;


    // To clear out a string we use clear().
    string abc = " iadjaojdal ajwrladma aojdlajdal";
    cout << abc << endl;
    abc.clear();
    cout << "Cleared abc string: " << abc << endl;


    // Compare is used to compare the lexicographical, i.e the alphabetical order of the strings. It returns 0 if both the strings are equal, and 1 if they are not equal.
    string s10 = "xzyakkska kwanlsakni";
    string s20 = "xzyakkska kwanlsakni";
    cout << s20.compare(s10) << endl;


    // Empty is used to check whether the string is empty or not.
    if(abc.empty())
        cout << "String abc is empty." << endl;


    // Erase function is used t oerase some characters, and it also shifts the following characters towards left so that there is no spaces between them.
    // It takes the starting index from where you want to start erasing as the first argument, and as the second argument it takes the number of characters to be erased.
    s10.erase(7, 5);
    cout << s10 << endl;


    // To find whether a substring is present in the string or not. And it outputs the first index where this substring is found.
    cout << s10.find("zya") << endl;


    // Insert function inserts the given string in between another string. It takes 2 arguments, first the index on which you have to insert second the string that is to be inserted.
    s10.insert(2, "lol");
    cout << s10 << endl;


    // Length returns the length of the string.
    cout << "Length of s10 is: " << s10.length() << endl;


    // Substr returns a substring from the string, it takes 2 arguments. First is the index from where you want the substring and second is the length of the substring.
    cout << s10.substr(6, 4) << endl;


    // Stoi function is used to convert a string of integer into actual integer.
    string number = "9999";
    int x = stoi(number);
    cout << x + 2 << endl;


    // Tosting is used to convert an integer into a string.
    int y = 87654;
    cout << to_string(y) << endl;


    // Sort is used to sort a string, it takes 2 arguments, the starting index and the ending index of the string.
    string unsort = "alsdsfsknfskjnsd";
    cout << "Unsort before sorting: " << unsort << endl;
    sort(unsort.begin(), unsort.end()); //  Begin gives the starting iterator of the string, and end gives the iterator pointing next to the last element of the string.
    cout << "Unsort after being sorted: " << unsort << endl;
    return 0;
}