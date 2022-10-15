#include <iostream>
using namespace std;

int main ()
{
    int n;
    double m,t,a,b,c,d;
    a=12.50;b=20.50;c=10.40;d=17.50;
    cin >> n >> m ;
    switch(n)
    {
        case 1:t=m*a;cout << t ;break;
        case 2:t=m*b;cout << t ;break;
        case 3:t=m*c;cout << t ;break;
        case 4:t=m*d;cout << t ;break;
        default:cout << "none" ;
    }
}