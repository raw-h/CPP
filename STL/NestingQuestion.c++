// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     map<int, multiset<string>> student_marks;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         int marks;
//         string name;
//         cin >> name >> marks;
//         student_marks[marks].insert(name);
//     }
//     auto curr_it = --student_marks.end();
//     while(true){
//         auto &student = (*curr_it).second;
//         int marks = (*curr_it).first;
//         for(auto students : student)
//             cout << students << " " << marks << endl;
//         if(curr_it == student_marks.begin())
//             break;
//         curr_it--;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, multiset<string>> student_marks;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;
        cin >> name >> marks;
        student_marks[-1 * marks].insert(name);
    }
    cout << "Printing the names and marks accordingly: " << endl;
    for (auto &student_marks_pair : student_marks)
    {
        auto &student = student_marks_pair.second;
        int marks = student_marks_pair.first;
        for (auto &students : student)
            cout << students << " " << -1 * marks << endl;
    }
    return 0;
}