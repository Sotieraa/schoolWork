#include <iostream>
using namespace std;

int main ()
{
    int x,a,b,c,d,e;
    cin >> x ;
    a=x%10;x/=10;
    b=x%10;x/=10;
    c=x%10;x/=10;
    d=x%10;
    e=x/10;
    if(a==e&&b==d)
    cout << "YES" ;
    else
    cout << "NO" ;
}