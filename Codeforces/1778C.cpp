#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n,k,ans;
bool mark[26];
string a,b,c;

ll count(){
	ll cons=0, localAns=0;
	for(ll i=0; i<n; i++){
		if(a[i]==b[i] || mark[a[i]-'a']){
			cons++;
		}else{
			localAns += (cons*(cons+1))/2;
			cons = 0;
		}
	}
	localAns += (cons*(cons+1)/2);
	
	return localAns;
	
}


void solve(ll i, ll cnt){
	if(cnt > k) return;
	if(i == (ll)c.size()){
		if(cnt == k){
			ans  = max(ans, count());
		}
		return;
	}
	
	
	solve(i+1, cnt);
	mark[c[i]-'a'] = 1;
		
	solve(i+1, cnt+1);
	mark[c[i]-'a'] = 0;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t;	cin >> t;
	
	while(t--){
		memset(mark,0, sizeof(mark));
		c.clear();
		
		cin >> n >> k >> a >> b;
		
		unordered_set<char> xx;
		for(ll i=0; i<n; i++){
			if(a[i] != b[i]) xx.insert(a[i]);
		}
		
		for(auto l:xx)	c.push_back(l);
		
		k = min(k, (ll)xx.size());
		
		ans = 0;
		
		solve(0, 0);
		
		cout << ans << "\n";
		
		
	}

	return 0;
}