#include<iostream>
using namespace std;
int print(int x){
    if(x<1){
        return  0;
    }
    else{
        print(x-1);
        cout<<x<<" ";

    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}