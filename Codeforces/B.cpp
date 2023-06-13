#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ll t;			cin >> t;
	while(t--){
		string s;	cin >> s;
		ll n = (ll)s.length();
		
		ll cnt_A = 0;
		for(ll i=0; i<n; i++){
			if(s[i] == 'a') cnt_A++;
		}
		
		if(cnt_A == n || cnt_A == 0){
			cout << s[0] << " " << s.substr(1, n-2) << " " << s[n-1] << "\n";
			continue;
		}
		
		if((s[0]=='a' && s[1] == 'a')|| (s[0]=='b' && s[1]=='b'))
		{
			cout << s[0] << " " << s[1] << " " << s.substr(2, n-1) << "\n";
			continue;
		}
		
		if((s[0]=='b' && s[1]=='a')){
			cout << s[0] << " " << s[1] << " " << s.substr(2, n-1) << "\n";
			continue;
		}
		
		ll ind=n-1;
		for(ll i=2; i<n; i++) {
			if(s[i] == s[0]) {
				ind = i;
				break; 
			}
		}
		cout << s[0] << " " << s.substr(1, ind-1) << " " << s.substr(ind, n-1) << "\n";
	}	
	
}