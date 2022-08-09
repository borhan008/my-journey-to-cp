#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y, size;
    set<int> vec;
    cin >> t;
    while (t--)
    {
        cin >> x;
        while(x--){
            cin >> y;
            vec.insert(y);
        }
          size = vec.size();
        for(auto z : vec){
            if(z - *vec.upper_bound(z) <= 1){
               size--;
            }
        }
    if(size == 1) cout << "YES";
    else cout << "NO";
    cout << endl;
    vec.clear();
     
    }
     

    


    
}