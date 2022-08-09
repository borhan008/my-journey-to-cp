#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    vector<int> x;
    set<int> s;
    int m,i;
    int y=0;
    int b=-1;
    int count = 0;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            while(n--){
            cin >> m;
            x.push_back(m);
            }
        sort(x.begin(), x.end());
           for( i=1; i<x.size(); i++){
                if(x[i] == x[i-1]) x[i-1]++;
           }

           for( i=0; i<x.size(); i++){
                 s.insert(x[i]);

           }
    
        cout <<  s.size() <<  endl;
          x.clear();
        s.clear();

        }
    }

}