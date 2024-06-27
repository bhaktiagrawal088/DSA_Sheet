#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int  i = n-1 ; i>= 0; i--){
        int didiswap = 0;
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1] ){
                swap(arr[j], arr[j+1]);
                didiswap = 1;
            }
        }
        if(didiswap == 0) break;
        cout<<"run"<<endl;
    }
}
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0 ;i < n; i++){
        cin>>arr[i];
    }
    bubble_sort(arr, n);
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }
}