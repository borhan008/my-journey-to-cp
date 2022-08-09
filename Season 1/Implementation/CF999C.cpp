#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string x;
    cin >> x;
    for(char y='a'; y<='z'; y++){
                   if(k==0) break;

        for(int i=0; i<n; i++){
            if(k==0) break;
            if(x[i] == y)  {
                x.erase(i,1);
                n--;
                k--;
            };
        }
    }
    cout << x;

}