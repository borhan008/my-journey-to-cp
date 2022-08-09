#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n,x;
    cin >> t;
    long long int arr[2*100000] = {0};

    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
    x = sizeof(arr) / sizeof(arr[0]);
       sort(arr, arr+n);
       if(arr[0] == arr[n-1]) cout << n << endl;
       else  cout << "1" << endl;
    }

   




}