#include <iostream>
using namespace std;

int main ()
{
    double m,h,std,std1,std2;
    cin >> m >> h ;
    std=h-110;
    std1=std+5;std2=std-5;
    if(m>std1)
    cout << "fat " ;
    else if(m<std2)
         cout << "thin" ;
         else
         cout << "good" ;
}