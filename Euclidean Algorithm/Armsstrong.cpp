#include<iostream>
using namespace std;
int main(){
    int num ;
    cin>>num;
    int n = num;
    int sum = 0;
    while(n>0){
        int last = n%10;
        sum = sum + (last * last * last);
        n = n/ 10;
    }
    if(num == sum)
        cout<<"Armstrong number";
    else
    cout<<"Not an Armstrong number";
}