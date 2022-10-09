#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	string s;
	cin >> t;
	while(t--){
		cin >> n >>s;
		int mid =n/2;
		int ans=1;
		for(int i=mid-1; i>=0; i--){
			if(s[i]==s[mid]) ans++;
			else{
				break;
			}
 		}
 		for(int i=mid+1; i<n; i++){
			if(s[i]==s[mid]) ans++;
			else{
				break;
			}
 		}
 		cout << ans << endl;
 		
	}
	
}