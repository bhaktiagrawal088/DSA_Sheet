#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i <n ;i++){
        cin>>arr[i];
    }
    int k ; 
    cout<<"Enter the sum of an array"<<endl;
    cin>>k;

    // **** Brute ****
    // int len = 0;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = i ; j < n; j++){
    //         int sum = 0 ;
    //         for(int k = i ; k <= j ; k++){
    //             sum += arr[k];
    //         }
    //         if(sum == k) {
    //             len = max(len , j-i+1);
    //         }
    //     } 
    // }
    // cout<<"The longest len is " << len<<endl;
    // return 0;
    // **** Time complexity ----> O(n^3)
    // **** Space complexity ----> O(1)

    // int len = 0 ;
    // for(int i = 0 ; i< n; i++){
    //     int sum = 0 ;
    //     for(int j = i ; j < n ;j++){
    //         sum += arr[j];
    //         if(sum == k) {
    //             len = max(len , j-i+1);
    //         }
    //     }
    // }
    // cout<<"The longest len is " << len<<endl;

    // Time complexity ---> O(n^2)
    // Space complexity ---> O(1)

    //**** Better approach****/
    int maxlen = 0;
    int sum = 0 ;
    unordered_map<int ,int> prevMap;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];

        if(sum == k) {
            maxlen = max(maxlen, i+1);
        }
        int rem = sum - k;
        if(prevMap.find(rem) != prevMap.end()){
            int len = i - prevMap[rem];
            maxlen = max(maxlen, len);
        }
        prevMap[sum] = i;
    }
    cout<<"Longest len is "<<maxlen<<endl;
}