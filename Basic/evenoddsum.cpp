#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int rem=0, sum1=0, sum2=0;
    while(num != 0){
        rem = num %10;
        num = num/10;
        // cout<<rem<<endl;
        if(rem%2 == 0){
            sum1 += rem;
        }else{
            sum2 += rem;
        }
    }
    cout<<sum1<<endl;
    cout<<sum2<<endl;
    
}