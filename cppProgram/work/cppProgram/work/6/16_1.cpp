#include<iostream>
using namespace std;

int main()
{
 int Y, M, D;
 cin >> Y >> M >> D;
 if (M == 2 && D == 29)
  cout << -1 << endl;
 else
 {
  if (Y % 4 == 0 && Y / 100 != 0 || Y % 400 == 0)
  {
   if (M < 2 || M == 2 && D <= 29)
    cout << 5 * 366 + 13 * 365 << endl;
   else cout << 4 * 366 + 14 * 365 << endl;
  }
  else if ((Y + 2) % 4 == 0 && (Y + 2) % 100 != 0 || (Y + 2) % 400 == 0)
  {
   if (M > 2 || M == 2 && D >= 29)
    cout << 5 * 366 + 13 * 365;
   else cout << 4 * 366 + 14 * 365;
  }
  else if ((Y + 3) % 4 == 0)
   cout << 4 * 366 + 14 * 365;
  else if ((Y + 1) % 4 == 0)
   cout << 5 * 366 + 13 * 365;
   
 }
 return 0;
}