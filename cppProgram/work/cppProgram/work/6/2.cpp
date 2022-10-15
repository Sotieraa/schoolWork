#include <iostream>
using namespace std;

int main ()
{
    int age;
    cin >> age;
    if(age<16)
    cout << "I am a child!" <<endl;
    else if(age>55)
         cout << "I am an old!" <<endl;
        else
        cout << "I am an adult!" <<endl;
}