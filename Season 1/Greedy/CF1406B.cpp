#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n, x;
    vector<long long int> v;
    cin >> t;
    long long int best1, best2, best3, best4, best5, best6;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        best1 = v[n-1]* v[n-2]* v[n-3]* v[n-4]* v[n-5];
        best2 = v[0]* v[n-4]* v[n-3]* v[n-2]* v[n-1];
        best3 = v[0]* v[1]* v[n-3]* v[n-2]* v[n-1];
        best4 = v[0]* v[1]* v[2]* v[n-2]* v[n-1];
        best5 = v[0]* v[1]* v[2]* v[3]* v[n-1];
        best6 = v[0]* v[1]* v[2]* v[3]* v[4];
       cout << max(best1, max(best2, max(best3, max(best4, max(best5, best6))))) <<endl;
       v.clear();
    }
}