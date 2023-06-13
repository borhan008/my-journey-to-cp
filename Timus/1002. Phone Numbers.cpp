#include <bits/stdc++.h>
using namespace std;

#define ll  long long

vector<char> v{'2','2','2','3','3','3','4','4','1','1','5','5','6','6','0','7','0','7','7','8','8','8','9','9','9','0'};
/*
https://acm.timus.ru/problem.aspx?space=1&num=1002
Idea : BFS
*/

int main() {
	string s;	cin >> s;
	while(s != "-1"){
		vector<int> adj[200];
		set<string> st;
		vector<vector<string>> dp(105, vector<string>(105, "-1"));
		s="@"+s;
		
		int n;	cin >> n;
		map<string, string> mp;
		
		while(n--){
			string x;	cin >> x;
			string y =x;
			for(int i=0; i<(int)x.length(); i++){
				x[i] = v[x[i]-'a'];
			}
			mp[x] = y;
			st.insert(x);
		}
	
		for(int i=1; i<=(int)s.length()-1; i++)
		{
			string z = "";
			for(int j=i; j<=(int)s.length()-1; j++){
				z += s[j];
				if(st.find(z) != st.end()){
					dp[i][j] = z;
					adj[i].push_back(j);
				}
			}
		}
		
		
		queue<pair<int, string>>  q;
		q.push({1, ""});
		
		vector<int> vis(105,0);
		vis[1]=1;
		bool ans = false;
		
		while(!q.empty()){
			auto [u, str] = q.front();
			q.pop();
			
			if(u == (int)s.length()){
			  	string word = "";
			    for (auto x : str)
			    {
			        if (x == ' ')
			        {
			           cout << mp[word] << " ";
			            word = "";
			        }
			        else {
			            word = word + x;
			        }
			    }	
			    cout << "\n";			
				ans = true;
				break;
			}
			for(auto l:adj[u]){
				if(!vis[l]){
					vis[l]=1;
					q.push({l+1, str+dp[u][l]+" "});
				}
			}
			
		}
		if(!ans) cout << "No solution.\n";	
		cin >> s;
	}
}
