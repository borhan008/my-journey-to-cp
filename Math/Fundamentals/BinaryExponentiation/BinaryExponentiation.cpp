#include<bits/stdc++.h>
using namespace std;
long long int binaryExpo(long long int a, long long int k){
    long long int mul = 1;
    if(k==1) return a;
    mul = binaryExpo(a, k/2);
    if(k%2 == 0) return mul*mul;
    else return mul*mul*a; 
}
int main(){
    long long int a,k;
    cin >> a >> k;
    long long int x = binaryExpo(a,k);
    cout <<x;
}