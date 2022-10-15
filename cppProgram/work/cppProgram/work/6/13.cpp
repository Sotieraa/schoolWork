#include <iostream>
using namespace std;

int main ()
{
    int m,s;
    cin >> m ;
    s=m*(m-1)+((m-1)*(m/2)+(m-1)*(m-2)*(m/2));
    cout << s ;
}