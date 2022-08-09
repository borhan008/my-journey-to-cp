#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    long long int x;
    cin >> n >> k;
    long long int v[n];
    vector<int>::iterator lower, upper;
    for(int i=0; i<n; i++){
        cin >> x;
        v[i] = x;
    }
    sort(v, v+n);
    if(k==0){ 
        cout << (v[0] == 1 ? -1 : v[0] - 1);
    }else{
        if(v[k-1] == v[k]) cout << -1;
        else cout << v[k-1];
    }




}