#include <bits/stdc++.h>
using namespace std;

void upperBound(int n, int f, vector<int> v)
{
    /*
        UPPERBOUNT > the-searched-element (f)
    */
    int hi = n - 1, lo = 0, mid;
    while (hi - lo > 1)
    {
        mid = lo + (hi - lo) / 2;
        if (v[mid] <= f)
            lo = mid + 1;
        else
        {
            hi = mid;
        }
    }
    if (v[lo] > f)
        cout << "UP " << lo << endl;
    else if (v[hi] > f)
        cout << "UP " << hi << endl;
    else
        cout << "NO UPPERBOUND" << endl;
}

void lowerBound(int n, int f, vector<int> v)
{

    int hi = n - 1, lo = 0, mid;
    while (hi - lo > 1)
    {
        mid = lo + (hi - lo) / 2;
        if (v[mid] < f)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    if (v[lo] <= f)
        cout << "LB " << v[lo];
    else if (v[hi] <= f)
        cout << "LB " << v[hi] << endl;
    else
        cout << "NO LOWERBOUND" << endl;
}

int main()
{
    int n, f;
    cin >> n >> f;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    upperBound(n, f, v);
    lowerBound(n, f, v);
}