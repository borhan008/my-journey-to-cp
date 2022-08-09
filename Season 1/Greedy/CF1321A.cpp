#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for( i=0; i<n; i++)
#define fr1(i,n) for( i=1; i<=n; i++)
#define scn(n) cin >> n
#define sco(n) cout << n

int main(){
    int n,i,x, r=0, b=0, ans=1;
    cin >> n;
    vector<int> robo;
    vector<int> bio;
    fr(i,n) scn(x), robo.push_back(x);
    fr(i,n) scn(x), bio.push_back(x);

    fr(i,n) if(robo[i] == 1 && bio[i] == 0) r++; else if(robo[i] == 0 && bio[i] == 1) b++;

  
    if(r==0) sco(-1);
    
    else{
        int z = r;
        fr1(i,100000) if(r<=b) r=i*z, ans=i; else break;
        sco(ans);
    }


}