#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define maxn (ll)1e6+5
 
int main(){
   
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll t; cin >> t;
   
   while(t--){
      string s;   cin >> s;
      ll i=s.length()-1;
      ll x;
     for(; i>0; i--){
       x = s[i]+s[i-1]-48-48;
       if(x>=10){
          break;
       }
     }
     i--;
     if(i<=0) {
        x = s[0]+s[1]-48-48;
        cout << x;
        for(ll j=2; j<s.length(); j++) cout << s[j];
        cout << endl;
        continue;
     }
     for(ll j=0; j<s.length(); j++){
        if(j==i){
           cout << x;
           j+=1;
           continue;
        }
        cout << s[j] ;
     }
     cout << "\n";
   }
  return 0;
}