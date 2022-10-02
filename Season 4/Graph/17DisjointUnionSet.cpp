#include <bits/stdc++.h>
using namespace std;
#define MAX 100
int parent[MAX];
int Size[MAX];

void make(int v)
{
    parent[v] = 1;
    Size[v] = 1;
}

int find(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}

int main()
{
}