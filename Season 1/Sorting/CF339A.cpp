#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;
    int z=0;
    sort(s.begin(), s.end());
    for(int i=floor(s.length()*1.0/2); i<s.length(); i++){
        cout << s[i];
        if(i+1 != s.length()){
            cout << '+';
        }
    }
}