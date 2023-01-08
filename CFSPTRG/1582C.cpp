#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define maxn (ll)1e6+5

int main(){
   
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t; cin >> t;
	while(t--){
      ll n; cin >> n;
      string s;   cin >> s;
    
      vector <ll> xx(26, 0);

     for(ll i=0; i<26; i++){
       	char ch = 'a' + i;
      
        ll l=0;
        ll r=n-1;        
        while(l <= r){
           if(s[l] != s[r]){
           
            if(s[l] == ch ){
            	l++;
               xx[i]++;
               
            }else if(s[r]==ch){
            	r--;
            	xx[i]++;
            }else{
               xx[i]=-1;
               break;
            }
           }else{
           	l++;
        	r--; 
           }
                  
        }
     }
     
    ll ans = (ll)1e7;
     for(auto l:xx){
        if(l == -1) continue;
        else ans = min(ans, l);
     }
     
     if(ans == (ll)1e7) cout << -1 << endl;
     else cout << ans << endl;

     
   }
}