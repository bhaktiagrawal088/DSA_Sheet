#include<iostream>
using namespace std;
// void reversearray(int arr[], int l, int r){
//     if(l >= r) return ;
//     swap(arr[l], arr[r]);
//     reversearray(arr, l+1, r-1);
// }
void reversearray(int arr[], int i, int n){
    if( i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reversearray(arr, i+1, n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    reversearray(arr, 0 , n);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
