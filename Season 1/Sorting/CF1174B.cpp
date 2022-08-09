#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<long long int> v;
    long long int x,y;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
        if(v[i]%2 == 0) x=1;
        else y=1;
    }
   
    if(x && y) sort(v.begin(), v.end());
    for(auto lt : v) cout << lt << " ";

}
