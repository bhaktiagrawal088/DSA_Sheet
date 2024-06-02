#include<iostream>
using namespace std;
int main(){
    int num; cin>>num;
    int rev = 0;
    int n = num;
    while(n>0){
        int last = n%10;
        rev = (rev*10) +last;
        n = n/10;
    }
    if(num == rev){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palinderome"<<endl;
    }
    return 0;
}