#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if ((y >= x && z <= x) || (x <= y && z <= y) || (x <= z && y >= z))
        {

            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}