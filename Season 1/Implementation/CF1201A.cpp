#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin >> n >> m;
string x[n+1];
int num[m+1];
int qmax[m+1][5] = {0};
int maxA;
int ans =0;
for(int i=0; i<n; i++){
    cin >> x[i];
}
for(int j=0; j<m; j++){
    cin >> num[j];
}
for(int i=0; i<m; i++){
    maxA = 0;
    for(int j=0; j<n; j++){
       qmax[i] [x[j][i] - 'A' + 1]++;
    }
    for(int j=0; j<5; j++){
        maxA = max(maxA, qmax[i][j]);
    }
    ans += maxA*num[i];

}

cout << ans;

}