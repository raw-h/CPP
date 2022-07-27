#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int i;
    //Using for loop
    for (i = 1; i <= n; i++)
        sum+= i;
    cout << "Sum till " << n << " natural numbers is(Using for loop) :- " << sum << endl;

    //Using while loop
    sum = 0;
    i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "Sum till " << n << " natural numbers is(Using while loop) :- " << sum << endl;
    
    //Using do while loop
    sum = 0;
    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    cout << "Sum till " << n << " natural numbers is(Using do-while loop) :- " << sum << endl;
    return 0;
}