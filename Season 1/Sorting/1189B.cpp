#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    if(b<a) return true;
    return false;
}
int main(){
    int t;
    long long int x;
    vector<long long int> v;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), comp);
    long long int max = 0;
    for(int i=1; i<t; i++){
        if(v[i] < v[0]){
            max = v[i];
            for(int j=i; j<t-1; j++){
                v[j] = v[j+1];
            }
            v[t-1] = max;
            break;
        }
    }
 
    if(v[0] < v[1] + v[t-1] && v[t-1] < v[0]+v[t-2]){
        cout << "YES" << endl;
        for(auto lt : v){
            cout << lt << " ";
        }
    }else{
       cout << "NO" << endl;
    }
    
    }