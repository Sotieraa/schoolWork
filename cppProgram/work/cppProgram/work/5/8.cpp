#include <iostream>
using namespace std;

int main()
{
    int y,m,d,d1,d3,d4,d5,d6,d7,d8,d9,d10,d11,d2,sum;
    d1=d3=d5=d7=d8=d10=31;
    d4=d6=d9=d11=30;
    d2=28;
    cin >> y >> m >> d ;
    switch (m)
    {
        case 1:sum=d;break;
        case 2:sum=d1+d;break;
        case 3:sum=d1+d2+d;break;
        case 4:sum=d1+d2+d3+d;break;
        case 5:sum=d1+d2+d3+d4+d;break;
        case 6:sum=d1+d2+d3+d4+d5+d;break;
        case 7:sum=d1+d2+d3+d4+d5+d6+d;break;
        case 8:sum=d1+d2+d3+d4+d5+d6+d7+d;break;
        case 9:sum=d1+d2+d3+d4+d5+d6+d7+d8+d;break;
        case 10:sum=d1+d2+d3+d4+d5+d6+d7+d8+d9+d;break;
        case 11:sum=d1+d2+d3+d4+d5+d6+d7+d8+d9+d10+d;break;
        case 12:sum=d1+d2+d3+d4+d5+d6+d7+d8+d9+d10+d11+d;break;
    }
    if((y%4==0)&&(y%100!=0)||(y%400==0))
    ++sum;
    cout << sum <<endl;
    return 0;
}