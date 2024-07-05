#include<bits/stdc++.h>
using namespace std;
// ******Brute *********
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i =0 ; i < n ;i ++ ){
//         cin>>arr[i];
//     }
//     int temp[n];
//     int j = 0 ;
//     for(int i =0 ; i < n ;i ++ ){
//         if(arr[i] != 0){
//             temp[j] = arr[i];
//             j++;
//         }
//     }
//     for(int i =  0 ; i <  j  ; i++){
//         arr[i] = temp[i];
//     }
//     for(int i = j ; i<n;i++){
//         arr[i] = 0;
//     }
//     for(int i =0 ; i < n ;i ++ ){
//         cout<<arr[i]<<" ";
//     }
// }

// *******Optimal *********
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i < n ;i ++ ){
        cin>>arr[i];
    }
    int j = -1;
    for(int i = 0 ; i < n ;i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1){
        for(int i = 0 ;i < n; i++){
            cout<<arr[i]<<" ";
        }
        return 0;
    }
    for(int i = j+1; i< n; i++){
        if( arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    for(int i =0 ; i < n ;i ++ ){
        cout<<arr[i]<<" ";
    }
}