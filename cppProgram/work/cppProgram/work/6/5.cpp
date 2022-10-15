#include <iostream>
using namespace std;

int main ()
{
    char x ;
    cin >> x ;
    if(x>=48&&x<=57)
    cout << "digit" ;
    else if((x>=65&&x<=90)||(x>=97&&x<=122))
         cout << "char" ;
         else
         cout << "other" ;
}