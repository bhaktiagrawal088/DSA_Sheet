#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n , int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}
int main(){
    int n ; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d ;
    cout<<"How many rotation we need";
    cin>>d;
    
    // Brute force approach
    // int temp[d];
    // for(int i = 0 ; i < d; i++){
    //     temp[i] = a[i];
    // }
    // for(int i = d ; i < n ; i++){
    //     a[i-d] = a[i];
    // }
    // for(int i = n-d; i< n ;i++){
    //     a[i] = temp[i-(n-d)];
    // }
   
    // Reverse approach
    leftRotate(a,n,d);
    

    // for(int i=0;i<d;i++){
    //     int temp = a[0];
    //     for(int j=0;j<n-1;j++){
    //         a[j]=a[j+1];
    //         }
    //         a[n-1]=temp;
    // }

    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
