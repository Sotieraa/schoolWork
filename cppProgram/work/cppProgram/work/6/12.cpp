#include <iostream>
using namespace std;

int main ()
{
    double r1,r2,i1,i2,r,i;
    char op;
    cin >> r1 >> i1 >> op >> r2 >> i2 ;
    switch(op)
    {
        case '+':
        {
            r=r1+r2;i=i1+i2;
            cout << r << " + " << i << "i" ;
            break;
        }
        case '-':
        {
            r=r1-r2;i=i1-i2;
            cout << r << " + " << i << "i" ;
            break;
        }
        case '*':
        {
            r=r1*r2-i1*i2;i=r1*i2+r2*i1;
            cout << r << " + " << i << "i" ;
            break;
        }
        case '/':
        {
            if(r2==0&&i2==0)
            cout << "Divisor cannot be 0" ;
            else
            {
                r=(r1*r2+i1*i2)/(r2*r2+i2*i2);
                i=(i1*r2-r1*i2)/(r2*r2+i2*i2);
                cout << r << " + " << i << "i" ;
            }
            break;
        }
        default:
        {
            cout << "error" ;
        }
    }
}