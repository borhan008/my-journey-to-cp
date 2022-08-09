#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10, key, j;
    int arr[n] = {5,1,-5,0,-10,2,15,4,3,1};  
    for(int i=1; i<n; i++){
       key = arr[i];
       j = i - 1;
       while (arr[j] > key && j >= 0)
       {
        arr[j+1] = arr[j];
        j--;
       }
       arr[j+1] = key;
       
    }

    for(auto x : arr){
        cout << x << " ";
    }
}