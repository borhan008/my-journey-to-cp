#include<bits/stdc++.h>
using namespace std;
long long int facto(int x){
    if(x==1) return 1;
    return x*facto(x-1);
}

int main(){
    int t;
    cin >> t;
    int x = 2*t - 2;
    cout << facto(x);

}