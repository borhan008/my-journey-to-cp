#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length() - 1;
    vector<int> temp;
    temp.push_back(INT_MAX);
    for (int i = 0; i <= n; i++)
    {
        if (s[i] > temp.back())
            temp.push_back(s[i]);
        else
        {
            int low_bound = lower_bound(temp.begin(), temp.end(), s[i]) - temp.begin();
            temp[low_bound] = s[i];
        }
    }
    cout << temp.size();
}