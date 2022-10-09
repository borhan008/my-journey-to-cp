#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    float digit;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0 || n < 7)
            cout << n << endl;
        else
        {
            int x = 10 * (n / 10);
            if (x % 7 == 0)
            {
                cout << x << endl;
                continue;
                ;
            }
            while (x % 7 != 0)
            {
                x++;
            }
            cout << x << endl;
        }
    }
}