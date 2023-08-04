#include<bits/stdc++.h>
using namespace std;

class STG_Tree{
	// 1 base indexing
	int n;
	vector<int> seg;
	vector<int> arr;
	public:
	STG_Tree(int a){
		n=a;
		seg.resize(4*n + 5);
		arr.resize(n+5);	
	}
	
	void takeInput(){
		for(int i=1; i<=n; i++)	cin >> arr[i];
	}
	
	void build_in(int ind,int l, int r){
		if(l==r){
			seg[ind]=arr[l];
			return;
		}
		int mid = (l+r)/2;
		build_in(2*ind, l, mid);
		build_in(2*ind+1, mid+1, r);
		seg[ind] = seg[2*ind] + seg[2*ind + 1];		
	}	
	
	void build(){
		build_in(1,1,n);
	}
	
	int query_in(int ind, int low, int high, int l, int r){	
		if(low >= l && high <= r){
			return seg[ind];
		}
		if(low > r || high < l) return 0;
		int mid = (low+high)/2;
		int x = query_in(ind*2, low, mid, l, r);
		int y = query_in(2*ind+1, mid+1, high,l, r);

		return (x+y);		
	}
	
	int query(int l, int r){
		return	query_in(1,1,n, l, r);
	}
	
	void update_in(int s, int e,int i, int pos, int val){
		if(s < pos && e < pos ) return;
		if(s > pos && e > pos) return;
		
		if(s==e){
			seg[i] = val;
			return;
		}
		
		int mid = (s+e)/2;
		
		update_in(s, mid, 2*i, pos, val);
		update_in(mid+1, e, 2*i+1, pos, val);
		
		seg[i] = seg[2*i] + seg[2*i+1];
	}
	
	void update(int pos, int val){
		update_in(1,n, 1, pos, val);
	}
	
	
	
};

int main(){
	int n, q;	cin >> n >> q;
	STG_Tree s1(n);
	s1.takeInput();
	s1.build();
	while(q--){
		int t, l, r;	cin >> t >> l >> r;
		if(t==1) cout << s1.query(l, r) << "\n";
		else {
			s1.update(l,r);
		}
	}
	return 0;
}