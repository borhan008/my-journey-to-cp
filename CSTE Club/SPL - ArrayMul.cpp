#include <stdio.h>
long long int arr1[(int)1e5];
long long int arr2[(int)1e5];
long long int arr3[(int)1e5];
int main()
{
    int t1;
    scanf("%d", &t1);
    for (int i = 0; i < t1; i++)
        scanf("%lld", &arr1[i]);
    for (int i = 0; i < t1; i++)
        scanf("%lld", &arr2[i]);
    for (int i = 0; i < t1; i++)
    {
        arr3[i] = arr1[i] * arr2[i];
        printf("%lld ", arr3[i]);
    }
}