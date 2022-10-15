#include <iostream>
using namespace std;

int main ()
{
    char x ;
    cin >> x ;
    switch(x)
    {
        case 'A':cout << "85~100" << endl ;break;
        case 'B':cout << "70~84" << endl ;break;
        case 'C':cout << "60~69" << endl ;break;
        case 'D':cout << "0~60" << endl ;break;
        default:cout << "error" <<endl;
    }
}