#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int m,n;
    cin >> n >> m;
    vector<int> v;
    long long int count = 0;
    if(n>m) swap(n,m);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if((i+j)%5 == 0) count++;
        }
        v.push_back(count);
        if(i==10){
            break;
        }
    }

    cout << (n <= 10 ? (n == 10 ? v[9] : v[n%10 - 1]) : ((n/10)*v[9] + (n%10 == 0 ? 0 : v[n%10 - 1])));

}