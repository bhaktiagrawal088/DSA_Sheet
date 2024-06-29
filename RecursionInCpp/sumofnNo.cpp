#include<iostream>
using namespace std;
int sumn(int n){
    int sum = 0 ;
    if(n<1){
        return 0;
    }
    else{       
        sum = n + sumn(n-1);
    }
    return sum;
}
int sumpara(int i , int sum){
    if(i< 1){
        return sum;
    }
    else{
        sumpara(i-1, sum+i);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<sumn(n)<<endl;
    cout<<sumpara(n,0);
}