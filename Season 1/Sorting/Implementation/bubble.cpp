#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity

(n-1) + (n-2) + (n-3) + .... + 1 = n(n-1)/2
                                 = n^2

*/

int main(){
    int n=10, swapped;
    int arr[n] = {1,2,-5,0,-10,2,15,4,3,1};
    for(int i=0; i<n-1; i++){
        swapped = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped=1;
            }
        }
        if(swapped == 0) break;
    }

    for(auto x : arr){
        cout << x << " ";
    }
}