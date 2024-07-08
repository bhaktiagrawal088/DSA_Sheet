#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi = 0 ;
    int cnt = 0 ;
    for(int i = 0 ; i < n; i++){
        if(a[i] == 1) {
            cnt++;
            maxi = max(cnt,maxi);
        }
        else cnt = 0;
    }
    cout<<maxi;
}