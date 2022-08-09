#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x*2 > y) cout << -1  << " " << -1 << endl;
        else cout << x <<  " " << 2*x << endl;

    }
}