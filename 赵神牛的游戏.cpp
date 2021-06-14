#include<iostream>
using namespace std;
int main()
{
 int k, m,a,b, n, q = 0;
 cin >> k >> m >> n;
 
  for (int i = 1; i <= m; i++)
  {
   cin >> a >> b;
 
   if ((a==0&&b!=0)||(k / a) * b >= n)
   {
    cout << i << " ";
    q = 1;
   }
  
  }
  if (q == 0)
   cout << "-1";
 
 return 0;
}
