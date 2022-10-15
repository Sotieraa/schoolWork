#include <iostream>
using namespace std;
int main()
{
    int a=1,b=1,i=1;
    for(;i<=5;)
    {
        if(a%5==1)
        {
            a=(a-1)/5*4;
            i++;
        }
        else
        {
            b++;
            a=b;
            i=1;
        }      
    }
    for(int i=1;i<=5;i++)
    {
        a=a*5/4+1;
    }
    cout << a ;
}