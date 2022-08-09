#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
int n,a,b,c,d;
while(t--){
 cin >> n;   
cin >> a >> b>>c>>d;

if( ((a+b)*n >= (c-d) && (a+b)*n <= (c+d)) || ((a-b)*n >=(c-d) && (a-b)*n <= (c+d)) ||  ((a-b)*n >= (c-d) && (a+b)*n <= (c+d))  ||  ((a+b)*n >= (c-d) && (a-b)*n <= (c+d))) cout << "Yes" << endl;
else cout << "No" << endl;

}

}