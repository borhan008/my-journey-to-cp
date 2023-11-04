#include<bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e6+5;
int t[4*N];

void build(int a[], int v, int tl, int tr){
	if(tl ==tr){
		t[v] = a[tl];
	} else{
		int tm = (tl + tr) >> 1;
		build(a, 2*v, tl, tm);
		build(a, 2*v+(int)1, tm+1, tr);
		t[v] = t[2*v]^t[2*v+1];
	}
}
int query(int v, int tl, int tr, int l, int r){
	if(l > r) return 0;
	if(tl == l && tr==r) return t[v];
	int tm = (tl+tr) >> 1;
	return (query(2*v, tl, tm, l, min(tm, r))^query(2*v + 1, tm+1, tr, max(l, tm+1), r)); 
	
}

void update(int v, int tl, int tr, int pos, int val){
	if(tl == tr){
		t[v] = t[v]^val;
	} else{
		int tm = (tl+tr) >> 1;
		if(pos <= tm)	update(2*v, tl, tm, pos, val);
		else					update(2*v+1, tm+1, tr, pos, val);
		t[v] = t[2*v]^t[2*v + 1];
	}
}


int32_t main(){
	int n, q;	cin >> n >> q;
	int a[n+1];
	for(int i=1; i<=n; i++) cin >> a[i];
	build(a, (int)1, (int)1, n);
	while(q--){
		int ti, x, y;	cin >> ti >> x >> y;
		if(ti == 1){
			update(1,1, n, x, y);
		} else{
			cout << query(1, 1, n, x, y) << "\n";
		}
		
	}
	
	
	return 0;
}