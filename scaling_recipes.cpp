#include <bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("a.in", "r", stdin); 
   // freopen("a.out", "w", stdout);
   
   int tc, r, p, d, index = 1;
   string name;
   double weight, percentage, factor = 0.0, scaled_weight = 0.0, op = 0.0;
   vector<string> names;
   vector<double> weights;
   vector<double> percentages;

   cin >> tc;


   while(tc--)
   {

      cout << "Recipe # " << index << endl;
      cin >> r >> p >> d;

      names.clear();
      weights.clear();
      percentages.clear();

      factor = double(d) / double(p);

      while (r--)
      {
         cin >> name >> weight >> percentage;
         names.push_back(name);
         weights.push_back(weight);
         percentages.push_back(percentage);
         if (percentage == 100.0)
         {
            scaled_weight = weight * factor / 100;
         }
      }

      for (int i = 0; i < names.size(); i++)
      {
         op = scaled_weight * percentages[i];
         cout << names[i] << " " << fixed << setprecision(1) << op << endl;
      }

      for (int i = 0; i < 40; i++)
      {
         cout << "-";
      }
      cout << endl;

      index++;
   }
   
}