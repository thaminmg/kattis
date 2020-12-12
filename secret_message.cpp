#include <bits/stdc++.h>

using namespace std;

int main()
{
    // freopen("a.in", "r", stdin); 
    // freopen("a.out", "w", stdout);

    int tc;
    string ip, op;
    int l, m, k, tmp;
    cin >> tc;

    while (tc--)
    {
        cin >> ip;
        op = "";
        l = ip.length();
        m = ceil(sqrt(l));

        for (int i = 0; i < (m * m - l); i++)
        {
            ip += '*';
        }
       
        tmp = m * m - m;
        k = tmp;

        for (int i = m; i > 0; i--)
        {
            tmp = k;
            for (int j = m; j > 0; j--)
            {
                if (ip.at(tmp) != '*')
                {
                    op += ip.at(tmp);
                } 
                tmp = tmp - m;
            }
            k += 1;
        }
        cout << op << endl;
    }
}