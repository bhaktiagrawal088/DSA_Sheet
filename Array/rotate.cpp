// #include<iostream>
// using namespace std;
// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     int temp = arr[0];
//     int i ;
//     for(i = 1 ; i<n;i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
//     for(int i = 0 ; i < n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void rotateArray(int arr[], int n,  int d){
    d=d%n;
    int temp[d];
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n ; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d ; i < n; i++){
        arr[i] = temp[i - (n-d)];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i < n ;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    rotateArray(arr, n, d);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
