#include <bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("a.in", "r", stdin); 
   // freopen("a.out", "w", stdout);
   
   int n, t, task, total = 0, count = 0;
   cin >> n >> t;

   while(n--)
   {
      cin >> task;
      if (total + task <= t)
      {
         total += task;
         count++;
      }
      else 
      {
         break;
      }
   }
   cout << count << endl;
   
}