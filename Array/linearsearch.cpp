#include<iostream>
using namespace std;
int main(){
     int n ; 
     cin>>n;
     int arr[n];
     for(int i= 0 ; i<n;i++){
        cin>>arr[i];
     }
     int key;
     cout<<"Enter your search key"<<endl;
     cin>>key;
     for(int i = 0 ; i<n; i++){
        if(arr[i] == key){
            cout<<"Element found at index "<<i<<endl;
        }
     }
     return -1;
}