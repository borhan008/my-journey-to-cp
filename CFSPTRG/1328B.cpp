#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

int main(){
	int t; cin >> t;
	while(t--){
		int s,k;
		cin >> s >> k;
		string str;
		str.assign(s, 'a');
		
		for(int i=s-2; i>=0; i--){
			if(k <= (s-i-1)){
				str[i]='b';
				str[s-k]='b';
				cout << str << endl;
				break; 
			}
			k-=(s-i-1);
		}
	}
	return 0;
}