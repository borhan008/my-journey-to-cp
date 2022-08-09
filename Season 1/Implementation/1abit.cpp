#include <iostream>
#include<string>
using namespace std;

int main(){
 int t;
 cin >> t;
   string x;
   int y=0;  
   while(t--){
    cin >> x;
    if(x == "X++" || x=="++X") y++;
    else y--;
   }
   cout << y;
}