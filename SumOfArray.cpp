#include<iostream>
using namespace std;
// int main(){
//     int sum=0, i;
//     int arr[] = {10,20,30,40,50};
//     for(i = 0 ; i < 5; i++){
//         sum += arr[i] ;
//     }
//     for( i =0 ; i<5;i++){
//         arr[i] = sum - arr[i];
//     }

//     for(i =0 ; i< 5; i++) {
//         cout<<arr[i]<<" ";
//     }

// }
int main(){
    int sum = 0 , i;
    int arr[] = {10,20,30,40,50};
    for(int i =0 ;i < 5 ;i++){
        sum += arr[i];
    }
    for (i = 0 ; i< 5; i++){ 
        arr[i] = sum - arr[i];
        cout<<arr[i]<<" ";
    }
}