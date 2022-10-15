#include <iostream>
using namespace std;

int main()
{
    int i,n=0;
    for(int i=0;i<10;i++)
    {
        if(i%3)continue;
        n++;
    }
    cout << n <<endl;

}