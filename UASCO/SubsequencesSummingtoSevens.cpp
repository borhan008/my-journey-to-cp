#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;	cin >> t;
	long long int  arr[t];	for(auto &l:arr)	cin >> l;
	
	long long int ans = 0;
	map<long long int ,long long int > mp;
	
	for(long long  int i=0; i<=6; i++) mp[i]=-1;
	
	long long int sum = 0;
	for(long long int  i=0; i<t; i++){
		sum += arr[i];
		if(mp[sum%7]!=-1){
			ans = max(ans, i - mp[sum%7] );
		}else{
			mp[sum%7] = i;
		}
	}
	
	cout << ans;
	
	
	return 0;
}