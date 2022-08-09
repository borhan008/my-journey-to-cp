#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    int y;
    cin >> x >> y;
    int count = 0;
    while(y--){
        x = x%10 == 0 ? x/10 : x-1;
    }
    cout << x;

}