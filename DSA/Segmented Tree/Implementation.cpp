#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define ll long long

ll arr[mx];
ll tree[4*mx];

void init(ll node, ll b, ll e){
	if(b==e){
		tree[node]=arr[b];
		return;
	}
	
	ll left = b*2;
	ll right = b*2 + 1;
	ll mid = (left+right) >> 1;
	
	init(left, b, mid); 
	init(right, mid + 1, e);
	
	tree[node] = max(tree[left], tree[right]);
}

ll query(ll node, ll b, ll e, ll i, ll j){
	if(e < i || b > j ){
		return 0;
	}
	
	if(b >= i && e <= j){
		return tree[node];
	}
	
	ll left = b*2;
	ll right = b*2 + 1;
	ll mid = (left+right) >> 1;
	
	ll p1 = query(left, b, mid, i, j);
	ll p2 = query(right, mid+1, e, i, j);
	
	return max(p1, p2);
}

void update(ll node, ll b, ll e, ll i, ll j, ll updateValue){
	if(b > j || e < i) return;
	if(b >= i && e <= j){
		tree[node] = updateValue;
		return;
	}
	ll left = b*2;
	ll right = b*2 + 1;
	ll mid = (left+right) >> 1;
	
	update(left, b, mid, i, j, updateValue);
	update(right, mid+1, e, i, j, updateValue);	
}


int main(){
	
	return 0;
}