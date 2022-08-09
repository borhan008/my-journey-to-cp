#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t, n, x;
cin >> t;
long long int cnt;
while(t--){
    cin >> n;
    cnt = 0;
     map<int, int> v;
    for(int i=0; i<n; i++){ 
        cin >> x;
        cnt += v[x-i];
        v[x-i]++;
    }
    cout << cnt << endl;
}
 
}