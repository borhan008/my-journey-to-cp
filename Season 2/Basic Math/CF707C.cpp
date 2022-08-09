#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,ans;

    cin >> t;
    if(t==1 || t==2) cout << -1;
    else {

        if(t%2 == 0){
            t= t/2;
            cout << t * t - 1 << " " << t * t + 1;
        }else{
                    cout << (t*t - 1) /2 << " " << (t*t + 1) /2;

        }
    }
    return 0;

}