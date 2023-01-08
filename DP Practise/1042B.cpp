#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	int t; cin >> t;
	
	ll d[1006][8];
	
	for(int i=0; i<=1005; i++){
		for(int j=0; j<8; j++){
			d[i][j]=(ll)1e18;
		}
	}
	
	d[0][0]=0;
	
	for(int i=1; i<=t; i++){
		ll cost;
		string s;
		cin >> cost >> s;
		
		ll bits=0;
		for(int j=0; j<(int)s.size(); j++){
			ll x = 'C' - s[j];
			bits += (1 << x);	
		}
		
		for(int j=1; j<8; j++){
			
			d[i][j]=min(d[i-1][j], d[i][j]);			
			if(j==bits){
				d[i][j]=min(d[i-1][j], cost);
			}else{
				d[i][j] = min(d[i-1][j], d[i][j]);
			}	
				
			int x=j | bits;
			
			d[i][x]=min(d[i][x], d[i][j] + cost);
		
		}
		
	}

	cout << ((d[t][7] == (ll)1e18) ? -1 : d[t][7]) << endl;
}