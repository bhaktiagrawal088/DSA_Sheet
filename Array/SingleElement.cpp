#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i< n;i++){
        cin>>arr[i];
    }
    // *** Brute ***
    // for(int i = 0 ; i< n; i++){
    //     int num = arr[i];
    //     int cnt = 0;
    //    for(int j = 0 ; j < n; j++){
    //     if(arr[j] == num){
    //         cnt++;
    //     }
    //    }
    //     if(cnt == 1)
    //         cout<<num<<" ";

    // }

    // TC  - O(n^2)
    // SC - O(1)

    // *** Better ***
    // int maxi = arr[0];
    // for(int  i = 0 ; i < n; i++){
    //     maxi = max(maxi,arr[i]);
    // }
    // int hash[maxi + 1] = {0};
    // for(int i = 0 ; i < n; i++){
    //     hash[arr[i]]++;
    // }
    // for(int i = 0 ; i < n; i++){
    //     if(hash[arr[i]] == 1)
    //     cout<<arr[i]<<" ";
    // }

    // **** Optimal ****
    // TC - O(n)
    // SC - O(1)

    int xorr = 0 ;
    for(int i = 0 ; i < n; i++){
        xorr = xorr ^ arr[i];
    }
    cout<<xorr<<endl;

}