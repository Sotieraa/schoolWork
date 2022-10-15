#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,max;
    cin >> a >> b >> c >> d >> e >> f ;
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    if(d>max) max=d;
    if(e>max) max=e;
    if(f>max) max=f;
    cout << max << endl ;
}