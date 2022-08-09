#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int x;
   for(int i=0; i<s.size(); i++){
     x= (int)s[i] - '0';
     x = min(x, 9-x);
     if(i==0 && x == 0){
       
     }else{
            s[i] = (char)x + '0';
     }
   }
   cout << s;

}