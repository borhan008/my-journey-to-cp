#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
int main(){
    int n;
    cin >> n;
    long long int x;
    vector<long long int> a;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
     if(n==3 && a[0]+a[1] > a[2]){
            cout << "YES";
            return 0;
    }   
    for(int i=0; i<=n - 3; i++){
        if(a[i] + a[i+1] > a[i+2]){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}