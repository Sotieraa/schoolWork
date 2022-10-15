#include <iostream>
using namespace std;

int main ()
{
    int sum,i;
    for(i=1;i<100;i+=2)
    {
        sum+=i;
    }
    cout << "sum=" << sum << endl ;
}