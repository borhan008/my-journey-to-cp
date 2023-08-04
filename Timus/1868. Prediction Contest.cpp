#include <bits/stdc++.h>
using namespace std;

#define ll  long long


int main() {
	#define int long long	
	map<string, int> winner;
	for(int i=1; i<=12; i++){
		string s;	cin >> s;
		winner[s] = ceil((i*1.000)/4);
	}

	int n;	cin >> n;
	vector<int> arr(n, 0);
	for(int i=0; i<n; i++){
		int t;	cin >> t;
		while(t--){
			string x, y, z;
			cin >> x >> y >> z;
			int m;
			if(z=="gold") m=1;
			else if(z=="silver") m=2;
			else m=3;
			
			if(winner[x]==m){
				arr[i]++;
			}
		}
	}
	
	long long x=0;
	sort(arr.begin(), arr.end(), greater<int>());

	for(auto l:arr){
		if(l==arr[0]) x++;
	}
	cout << x*5ll;

}