#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,ab;
    cin >> a >> b >> ab;

    cout << (a == b ? (a+ab)*2 : (min(a,b)*2 + ab*2 + 1));

}