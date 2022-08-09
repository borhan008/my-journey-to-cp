#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    set<int> x;
    cin >> n >> m >> k;
    int strong[n];
    int school[n];
    int p[k];
    for(int i=0; i<n; i++) cin >> strong[i];
    for(int i=0; i<n; i++) cin >> school[i];
   
    
    for(int j=0; j<k; j++) cin >> p[j];
    int count = 0;
    for(int i=0; i<k; i++){
        int maxS=strong[p[i]-1];
        for(int j=0; j<n; j++){
            if(school[p[i]-1] == school[j])           
                 maxS = max(maxS, strong[j]);
;
        }
        if(maxS > strong[p[i]-1]){
            count++;
        }
    }
    cout << count;
}