#include<bits/stdc++.h>
using namespace std;

#define mx 100010
#define ll long long

ll arr[mx];
ll tree[4*mx];

ll get(ll x) {
	ll s = 0;
    while (x) {
      s += x % 10;
      x /= 10;
    }
	return s;
}

void init(ll node, ll b, ll e){
	if(b==e){
		tree[node]=arr[b];
		return;
	}
	
	ll left = node*2;
	ll right = node*2 + 1;
	ll mid = (b+e)/2;
	
	init(left, b, mid); 
	init(right, mid + 1, e);
	
	tree[node] = max(tree[left], tree[right]);
}

ll query(ll node, ll b, ll e, ll i, ll j){
	if(e < i || b > j ){
		return 0;
	}
	
	if(b==e && b==i){
		return tree[node];
	}
	
	ll left = node*2;
	ll right = node*2 + 1;
	ll mid = (b+e)/2;
	
	if(i <= mid) return query(left, b, mid, i, j);
	else return query(right, mid+1, e, i, j);
	
	//return max(p1, p2);
}

void update(ll node, ll b, ll e, ll i, ll j, ll updateValue){
	if(b > j || e < i) return;
	if(tree[node] <= 9) return;
	if(b==e && b >= i && e <= j){
		tree[node] = get(tree[node]);
		return;
	}
	ll left = node*2;
	ll right = node*2 + 1;
	ll mid = (b+e)/2;
	
	update(left, b, mid, i, j, updateValue);
	update(right, mid+1, e, i, j, updateValue);	
	tree[node] = max(tree[left], tree[right]);
}


int main(){
	ll test;	cin >> test;
	while(test--){
		ll n,q;		cin >> n >> q;
		for(ll i=1; i<=n; i++)	cin >> arr[i];
		init(1,1,n);
		while(q--){
			ll t;	cin >> t;
			if(t==1){
				ll l,r;	cin >> l >> r;
				update(1,1,n,l,r,0LL);
			}else{
				ll x;	cin >> x;
				cout << query(1,1,n,x,x) << "\n";
			}
		}
	}
	
	return 0;
}