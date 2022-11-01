#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	int flag=0;
	for(int i=0; i<s1.length(); i++){
		char x = s1[0];
		for(int i=0; i<s1.length(); i++){
			s1[i]=s1[i+1];
		}
		s1[s1.length() - 1] = x;
		if(s1==s2){
			flag=1;
			break;
		}
	}
	if(flag==0) cout << "NO";
	else cout << "YES";
}