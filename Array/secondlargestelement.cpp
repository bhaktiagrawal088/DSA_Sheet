// better approach its time complexity  - 0(2n)

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i< n ; i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i = 0 ; i < n ;i++){
//         if(max < arr[i]){
//             max= arr[i];
//         }
//     }
//     int secondmax  = -1 ;  // beacuse we suppose that array doesn't take -ve number if -ve then use INT_MIN
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] != max && secondmax < arr[i]){
//             secondmax = arr[i];
//         }
//     }
//     cout<<secondmax;
// }

// Optimal approach

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ;i < n ; i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    int slargest = -1;
    for(int i = 1 ; i<n ; i++){
        if(largest <arr[i]){
            slargest = largest;
            largest = arr[i];
        }
        else if(slargest < arr[i] && largest > arr[i]){
            slargest = arr[i];
        }
    }
    cout<<slargest;

}