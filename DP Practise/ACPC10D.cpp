#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define mii map<ll,ll>
#define inf 100005
#define fo(i,n) for(ll i=0; i<n; i++)
#define all(x) x.begin(), x.end()
#define input(n,x) fo(i, n) cin >> x[i];
#define output(x) for(auto i : x) printf("%lld ", i)
#define sortall(x) sort(all(x))
#define YES printf("YES\n")
#define NO printf("NO\n")
#define endl "\n"
#define Maxn 100001
int mm=1;
int arr[Maxn][3];
void solve(ll n){
	
	for(int i=0; i<=n-1; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	arr[0][0]=inf;
	arr[0][2] = arr[0][2]+arr[0][1];
	//cout << arr[0][1] << endl;
	for(int i=1; i<n; i++){
		for(int j=0; j<3; j++){

		
		
			int x=(j==2)?inf:arr[i-1][j+1];
			int y=(j==0)?inf:arr[i-1][j-1];
			int z=arr[i-1][j];
			int m = (j==0) ? inf : arr[i][j-1];
			arr[i][j]+=min(min(x,y), min(z,m));
			
		}
	}
	
	printf("%d. %d\n", mm, arr[n-1][1]);
	
	mm++;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
    
 	int t; //cin >> t;
 	while(scanf("%d", &t)==1&&t) {
 		solve(t);
 	
 	}
 	
	return 0;
}