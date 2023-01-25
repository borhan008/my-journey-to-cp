#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define maxn (ll)1e6+5

ll gcd(ll a,ll b){
    if(b==0)return a;
    else return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll t; cin >> t;
   while(t--){
      
      string s1, s2;
      cin >> s1 >> s2;
      ll x1 = s1.length(), x2=s2.length();
      
      if(x1 > x2){
         swap(x1, x2);
         swap(s1, s2);
      }
      
      ll lm = lcm(x1, x2);
      ll a=x1, b=x2;
      string ss1 = s1, ss2 = s2;
      while(x2 < lm){
         s2 += ss2;
         x2 += b;
      }
      while(x1 < lm){
         s1 += ss1;
         x1 += a;
      }      
      if(s1 == s2) cout << s1 << "\n";
      else cout << -1 << "\n";
      
      
   }
  return 0;
}