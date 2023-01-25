#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define maxn (ll)1e6+5

template<typename T>
inline T gcd(T a, T b)
{
    T c;
    while (b)
    {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}
 
int main(){
   
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   ll t; cin >> t;
   
   while(t--){
      ll n;       cin >> n;
      
      ll a[n];  for(auto &l:a)  cin >> l;
      ll isPossible = 0;
      
      ll gcd_odd=(a[0]);
      for(ll i=2; i<n; i+=2) gcd_odd = gcd(gcd_odd, a[i]);
      
      ll gcd_even = (a[1]);
      for(ll i=3; i<n; i+=2){
          gcd_even =gcd(gcd_even, a[i]);
      }
           
 
      
      if(gcd_even != gcd_odd){
         bool x= true;
           for(ll i=0; i<n; i+=2){
              if(a[i]%gcd_even == 0){
                 x=false;
                 break;
              }
           }
           if(x) isPossible = gcd_even;
           if(!x){
              bool y=true;
               for(ll i=1; i<n; i+=2){
                  if(a[i]%gcd_odd == 0){
                     y=false;
                     break;
                  }
               }
               if(y) isPossible = gcd_odd;
           }
      }
      
      
    cout << isPossible << "\n";
   
      
   }
  return 0;
}