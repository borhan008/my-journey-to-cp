#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;	cin >> n;
	vector<pair<int, int>> vi;
	
	for(int i=1; i<=n; i++){
		int x, y;	cin >> x >> y;
		vi.push_back({x, y});
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			auto [x1, y1] = vi[i];
			auto [x2, y2] = vi[j];
			int cnt  = 0;
			for(int k=i; k<n; k++){
				auto [x3, y3] = vi[k];
				int a = (y2-y1)*(x2-x3);
				int b = (y2-y3)*(x2-x1);
				
				if(a == b){
					cnt++;
				}
			}
			ans = max(cnt, ans);
		}
	}
	
	cout << ans;
	return 0;
}