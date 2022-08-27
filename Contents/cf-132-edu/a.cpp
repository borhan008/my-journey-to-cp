#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s1, s2;
    set<int> x;
    while (t--)
    {

        cin >> s1 >> s2;

        x.insert(s1[0]);
        x.insert(s1[1]);
        x.insert(s2[0]);
        x.insert(s2[1]);
        cout << x.size() - 1 << endl;

        x.clear();
    }
}