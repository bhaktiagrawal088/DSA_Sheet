#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i< n;i++){
        cin>>arr[i];
    }
   
    for(int i = 0 ; i< n; i++){
        int num = arr[i];
        int cnt = 0;
       for(int j = 0 ; j < n; j++){
        if(arr[j] == num){
            cnt++;
        }
       }
        if(cnt == 1)
            cout<<num<<" ";

    }
}