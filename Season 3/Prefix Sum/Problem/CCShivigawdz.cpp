#include <bits/stdc++.h>
using namespace std;
double arr[100000];

int main()
{
    double t, n, a, b;
    double x;
    double maxTest = -5;
    double sum = 0;
    double y;
    cin >> t;
    while (t--)
    {
        cin >> n >> b >> a;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            arr[i] = x;
        }
        for (int i = 1; i <= n; i++)
        {
            sum = 0;
            for (int j = i; j <= n; j++)
            {
                sum += arr[j];
                if ((j - i + 1) >= a and (j - i + 1) <= b)
                {
                    y = sum / (j - i + 1);
                    if (y > maxTest)
                        maxTest = y;
                }
            }
        }
        printf("%0.20lf\n", maxTest);
    }
}