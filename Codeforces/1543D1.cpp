#include<bits/stdc++.h>
using namespace std;
#define int long long
 
 
int computeXOR(int n)
{
  if (n % 4 == 0)
    return n;
  if (n % 4 == 1)
    return 1;
  if (n % 4 == 2)
    return n + 1;
  return 0;
}
 
 
int32_t main() {
  int t=1; cin >> t;
	fflush(stdout);
	cout.flush();
	
  while (t--) {
		int n, k; cin >> n >> k;
		bool found = false;
		int y=0;
		cout <<  0 << "\n";
		cin >> y;
		if(y==1) continue;
		for(int i=2; i<=n+1; i++){
			int x = (i-1)^(i-2);
			cout << x << " ";
				cin >> y;
			if(y==1){
				found = true; break;
			}
		}
 
	} 
}