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
#define fo(i,n) for(ll i=0; i<n; i++)
#define sl(x) scanf("%lld",&x)
#define sll(x, y) scanf("%lld %lld",&x, &y)

#define si(x) scanf("%d",&x)
#define ss(x) scanf("%s", x)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)

#define ps(x) printf("%s\n", x)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
void solve(){
	ll n, k;
	sll(n, k);
	ll left=1;
	ll right = n;
	ll last = 0;
	while(left < right){
		if(k > 1 && last==0){
			cout << left << " ";
			left++;
			k--;
			last=1;
			
		}
		else if(k>1 && last == 1){
			cout << right << " ";
			right--;
			last=0;
			k--;
		}
		else{
			if(last==0){
				//cout << endl << left << "iii " << right << endl;
				
				while(left<=right){
					cout << left << " ";
					left++;
				}
			}else{
				while(right>=left){
					cout << right << " ";
					right--;
				}
			}
		}
	}
	
}
ll lcm(ll a, ll b){
	ll m = gcd(a,b);
	return ((a*b)/m);
}


ll gcd(ll a, ll b){
	return a==0 ? 0 : gcd(b, a%b);
}
int main(){
	ll t=1;
	//cin >> t;
	while(t--){
		solve();
	}
}