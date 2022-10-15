#include <iostream>
using namespace std;

int main()
{
    int x,i,s;
    for(x=1;x<=1000;x++)
    {
        for(i=x,s=0;i>0;i--)
        {
            if((x%i==0)&&(x!=i))
            s+=i;
        }
        if(s==x)
        cout << x << " " ;
    }
}