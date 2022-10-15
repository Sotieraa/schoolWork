#include <iostream>
using namespace std;

int main()
{
    int x,x1,x2,x3,x4,t,y;
    cin >> x;
    x1=x%10;x2=x/10%10;x3=x/100%10;x4=x/1000;
    x1=(x1+9)%10;x2=(x2+9)%10;x3=(x3+9)%10;x4=(x4+9)%10;
    t=x1;x1=x3;x3=t;
    t=x2;x2=x4;x4=t;
    y=x1+x2*10+x3*100+x4*1000;
    cout << y <<endl;
    return 0;
}