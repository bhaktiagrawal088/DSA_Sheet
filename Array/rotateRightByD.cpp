#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"How many element we rotate to the right side";
    cin>>d;
    int temp[d];
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }
    for(int i = d ; i < n ; i++){
    arr[i-d] = arr[i];
    }
    for(int i = 0 ; i < d ; i++){
        arr[n-d+i] = temp[i];
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }


};