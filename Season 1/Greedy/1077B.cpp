#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a, even = 0, odd=0;
    cin >> n;
    vector<int> v;
  vector<int> x;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    for(int i=1; i<v.size() - 1; i++){
        if(v[i] == 0 && v[i+1] == 1 && v[i-1]==1){
          x.push_back(i);
        }
    }
    if(x.size() > 1){
        for(int i=0; i<x.size(); i++){
            if((x[i+1] - x[i]) == 2) {even += 1; i++;}
            else odd++;
        }
    }
   cout << even + (x.size() - 2*even);
    
}