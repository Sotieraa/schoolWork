#include <iostream>
using namespace std;

int main()
{
    int x,x1,x2,x3,x4,x5;
    cin >> x;
    if(x/100000>=1)
    cout <<"a bad number"<<endl;
    else if(x/10000>=1)
         {
            x1=x%10;
            x2=x/10%10;
            x3=x/100%10;
            x4=x/1000%10;
            x5=x/10000%10;
            cout <<"10000:"<<x5 <<" "<<"1000:"<<x4 <<" "<<"100:"<<x3 <<" "<<"10:"<<x2 <<" "<<"1:"<<x1 <<" "<<endl;
        }
        else if(x/1000>=1)
             {
                x1=x%10;
                x2=x/10%10;
                x3=x/100%10;
                x4=x/1000%10;
                cout <<"1000:"<<x4 <<" "<<"100:"<<x3 <<" "<<"10:"<<x2 <<" "<<"1:"<<x1 <<" "<<endl;
             }
            else if(x/100>=1)
                 {
                    x1=x%10;
                    x2=x/10%10;
                    x3=x/100%10;
                    cout <<"100:"<<x3 <<" "<<"10:"<<x2 <<" "<<"1:"<<x1 <<" "<<endl;
                 }
                 else if(x/10>=1)
                      {
                        x1=x%10;
                        x2=x/10%10;
                        cout <<"10:"<<x2 <<" "<<"1:"<<x1 <<" "<<endl;
                      }
                      else cout <<"1:"<<x<<endl;
    return 0;                    
}
                