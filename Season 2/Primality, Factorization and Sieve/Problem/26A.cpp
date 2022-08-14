#include <bits/stdc++.h>
using namespace std;

int primeFactos(int t)
{
    int totalNum = 0;
    for (int j = 1; j <= t; j++)
    {
        int count = 0;
        int prev = 1;
        int num = j;
        for (int i = 2; i <= j; i++)
        {
            while (num % i == 0)
            {
                if (prev != i)
                {
                    count++;
                    prev = i;
                }
                num /= i;
            }
        }

        if (num > 1)
        {
            count++;
        }

        if (count == 2)
        {
            totalNum++;
        }
    }

    return totalNum;
}

int main()
{
    int t;
    cin >> t;
    int x = primeFactos(t);
    cout << x;
}