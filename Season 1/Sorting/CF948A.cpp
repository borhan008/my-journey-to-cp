#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x;
    vector<int> v;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << (t%2 == 0 ? v[t/2-1] : v[t/2 ]);
}