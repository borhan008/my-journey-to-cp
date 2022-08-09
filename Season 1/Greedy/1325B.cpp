#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n; 
    cin >> t;
    long long int num;
    set<long long int> x;

    while(t--){
        cin >> n;
        while(n--){
            cin >> num;
            x.insert(num);
        }
        cout << x.size() << endl;
        x.clear();
    }
}