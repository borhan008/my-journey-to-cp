#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y;
    cin >> x >> y;
    string a,b;
    for(int i=0; i<x.length(); i++){
        a = tolower(x[i]);
        b = tolower(y[i]);
    }
    if(a==b) cout << 0;
    else if(a<b) cout << -1;
    else cout << 1;

}