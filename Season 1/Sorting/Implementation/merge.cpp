#include<bits/stdc++.h>
using namespace std;



void merge(int arr[], int start, int mid, int end){
    int n1 = mid-start+1;
    int n2 = end-mid;
    int L[n1], M[n2];
    int i;
    for( i=0; i<n1; i++) L[i] = arr[i+start];
    for( i=0; i<n2; i++) M[i] = arr[i+mid+1];

    int j,k;
    i=j=0;
    k=start;
    while (i<n1 && j<n2)
    {
       if(L[i] <= M[j]){
        arr[k] = L[i];
        i++;
       }else{
        arr[k] = M[j];
        j++;
       }
       k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;

    }
    
    while(j<n2){
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end){
    if(start >= end) return;
    int mid = (start + end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}
int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1,-1};
    mergeSort(arr, 0, 10);
   for(auto x : arr) cout << x << " ";

}