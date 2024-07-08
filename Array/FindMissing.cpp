#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1 ; i< n;i++){
        cin>>arr[i];
    }

    // *****Brute*****

    // for(int i = 1 ;  i <= n; i++){
    //     int falg = 0;
    //     for(int j = 0 ; j < n-1; j++){
    //         if(arr[j] == i) {
    //             falg = 1;
    //             break; 
    //         }
    //     }
    //     if(falg == 0){
    //         cout<<i<<endl;
    //     }
    // }
    // time - O(NxN) and space - O(1)

    // **** Better ****

    // int h[n+1] = {0};
    // for(int i = 0 ; i< n-1; i++){
    //     h[arr[i]] = 1;
    // }
    // for(int i = 1 ; i <= n; i++){
    //     if(h[i] == 0){
    //         cout<<i<<endl;
    //     }
    // }
    //  time - O(2N) and space - O(n)

    // *** Optimal ****
    // int sum = n * (n+1)/2;
    // int sum1 = 0;
    // for(int i = 0 ; i< n-1; i++){
    //     sum1 += arr[i];
    // }
    // cout<<sum - sum1<<endl;

    // *** more optimal ****
    int x1 = 0;
    int x2 = 0;
    for(int i = 0 ; i < n-1; i++){
        x2 = x2^arr[i];
        x1 = x1^(i+1);
    }
    x1 ^= n;
    int x3 = x1^x2;
    cout<< x3;

}