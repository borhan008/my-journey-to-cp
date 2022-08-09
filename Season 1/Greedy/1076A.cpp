#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++){
        if(s[i] > s[i+1]){
            s.erase(s.begin() + i, s.begin() + i+1);
            break;
        }
    }
    if( s.length() == n){
         s.erase(s.begin() + n - 1, s.end());
    }
    cout << s;
}