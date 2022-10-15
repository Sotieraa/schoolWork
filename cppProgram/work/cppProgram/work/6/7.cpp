#include <iostream>
using namespace std;

int main ()
{
    int s,i,j,t;
    for(s=0,i=4;i<=8;i+=2)
    {
        for(t=1,j=i;j>0;j--)
            t*=j;
        s+=t;
    }
    cout << "s=4!+6!+8!=" << s ;
    return 0;
}