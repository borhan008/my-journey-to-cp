#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   int a,b;
   cin >> t;
      vector<pair<int, int>> lp(t);

   for(int i=0; i<t; i++){
           cin >> a >> b;
           lp[i].first = a;
           lp[i].second = b;
   }
   sort(lp.begin(), lp.end());
   for(int i=1; i<t; i++){
       if(lp[i-1].second > lp[i].second && lp[i-1].first < lp[i].first ){
           cout << "Happy Alex";
           return 0;
       }
   }
   cout << "Poor Alex";
   return 0;
 
}