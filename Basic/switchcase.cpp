#include<iostream>
using namespace std;
int Maximum(int x , int y){
    if (x > y) 
        return x ; 
    else 
        return y ;
}
int swap(int &a, int &b){
    a = a + b ;
    b = a-b;
    a = a-b;
    return (a,b);
    
}
int main(){
    int test, r=0, a=0 , b=0;
    cin>>test;
    switch(test)
    {
        case 1: 
            cout<<Maximum(a, b);
            cout<<"Maximum value is :"<<r;
            break;
        case 2:
            swap(a,b);
            cout<<a<<" "<<b;
            break;
        default:
            cout<<"Error!";
    }
    return 0;
}