#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    unordered_set<int> s;
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
            if(s.count(m)) m++;
            s.insert(m);
            }
 
    
        cout <<  s.size() <<  endl;
        s.clear();

        }
    }

}