#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double sal,tax,money;
    cin >> sal ;
    tax=sal;
    money=sal;
    if(sal<0)
    cout << "error" ;
    else
    {
        if(sal<=1000)
        cout << "tax=0.00" << ", money=" << setprecision(2) <<fixed<< money ;
        else
        {
            if(sal<=2000)
            cout << "tax=" << setprecision(2) <<fixed<< (tax-1000)*0.05 << ", money=" << setprecision(2) <<fixed<< money-((tax-1000)*0.05) ;
            else
            {
                if(sal<=3000)
                cout << "tax=" << setprecision(2) <<fixed<< (tax-2000)*0.10+50 << ", money=" << setprecision(2) <<fixed<< money-((tax-2000)*0.10+50) ;
                else
                {
                    if(sal<=6000)
                    cout << "tax=" << setprecision(2) <<fixed<< (tax-3000)*0.15+50+100 << ", money=" << setprecision(2) <<fixed<< money-((tax-3000)*0.15+50+100);
                    else
                    cout << "tax=" << setprecision(2) <<fixed<< (tax-6000)*0.20+50+100+450 << ", money=" << setprecision(2) <<fixed<< money-((tax-6000)*0.20+50+100+450);
                }
            }
        }
    }
}