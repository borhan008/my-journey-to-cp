#include<bits/stdc++.h>
using namespace std;
/*
Time Complexity:
(n-1) + (n-2) + .... + 1 = n(n-1)/2  = n^2

*/
int main(){
    int n=10, min;
    int arr[n] = {5,1,-5,0,-10,2,15,4,3,1};
    for(int i=0; i<n; i++){
        min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min] > arr[j]){
               min = j; 
            }
        }

        swap(arr[min], arr[i]);
    }

    for(auto x : arr){
        cout << x << " ";
    }

}