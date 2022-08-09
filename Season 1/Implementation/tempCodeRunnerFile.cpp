#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int minone = n*a;
    int minM = (n%m == 0) ?  (n/m)*b  :  (n/m)*b + ((a < b) ? (n%m)*a : b);
    cout << min(minone, minM);
}