#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x, count=0;
    
    vector<int> v;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i=1; i<t; i+=2){
        if(v[i] != v[i-1]){
            count += (v[i] - v[i-1]);
        }
    }
    cout << count;
}