#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    int y=0;
    cin >> x;
    while(x != 0){
        if(x%10 == 4 || x%10 == 7) {
            y++;
        }
        x/=10;
        
    }
    cout << (y==7 || y==4 ? "YES" : "NO");
    return 0;


}