#include<bits/stdc++.h>
using namespace std;

#define ll long long

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

	ll n;	cin >> n;
	ll a[n+2];	for(ll i=1; i<=n; i++) cin >> a[i];
	
	ll prefix_gcd[n+1];
	ll suffix_gcd[n+1];
	prefix_gcd[0]=0;
	suffix_gcd[n+1]=0;
	
	ll ans=0;
	
	for(ll i=1; i<=n; i++){
		prefix_gcd[i] = gcd(prefix_gcd[i-1],a[i]);
	}
	
	for(ll i=n; i>=1; i--){
		suffix_gcd[i]=gcd(suffix_gcd[i+1], a[i]);
	}
	
	for(ll i=1; i<=n; i++){
 		ans = max(ans, gcd(prefix_gcd[i-1], suffix_gcd[i+1]));
	}

	cout << ans << endl;
	return 0;
}