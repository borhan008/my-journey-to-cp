#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define inf 1e18
#define fo(i,n) for(i=0; i<n; i++)
#define sl(x) scanf("%lld",&x)
#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))


void solve(){
	ll n;
	vector<int> a (101,0);
	vector<int> b (101,0);
	cin >> n;
	int m,a1=0, a0=0, b1=0, b0=0;
	for(int i=0; i<n; i++){
		cin >> m;
		a[i]=m;	
		if(m==1)a1++;
		else a0++;
	}
	for(int i=0; i<n; i++){
		cin >> m;
		b[i]=m;	
		if(m==1)b1++;
		else b0++;
	}
	int x=0;
	if(a1==b1 && a0==b0){
		for(int i=0; i<n; i++){
			if(a[i] != b[i]){
				x=1;
				break;
			}
		}
		if(x==1) cout << 1 << endl;
		else cout << 0 << endl;
	}else{
		x=0;
		for(int i=0; i<n; i++){
			if(a[i] != b[i]) x++;
		}
		if(x > abs(a1-b1) ) cout << abs(a1-b1)+1 << endl;
		else cout << abs(a1-b1) << endl;
	}

}

int main(){
	
	ll t=1;
	cin >> t;
	while(t--){
		solve();
	}
}