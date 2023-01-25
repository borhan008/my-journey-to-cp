#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define maxn (ll)1e6+5
 
int main(){
   
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll t; cin >> t;
   
   while(t--){
      ll k,n,m;   cin >> k >> n >> m;
      
      ll a[n], b[m];
      for(auto &l:a) cin >> l;
      for(auto &l:b) cin >> l;
      
      ll i=0, j=0;
      vector<ll> vi;
      ll nk=k;
      bool flag=false;
      while(i < n || j < m){
         if(i < n and a[i] == 0  ){
            vi.push_back(0);
            i++;
            nk++;
         }
         else if(j < m and b[j] == 0){
           vi.push_back(0);
            j++;
            nk++;
         }
         else if(i < n and a[i] <= nk ) {
            vi.push_back(a[i]);
            i++;
         }
         else if(j < m and b[j] <= nk){
            vi.push_back(b[j]);
            j++;
            
         }
         else {
            flag=true;
            break;
         }
      }
     if(flag) {cout << "-1\n"; continue;}
      for(auto l:vi) cout << l << " ";
      cout << "\n";
     
   }
  return 0;
}