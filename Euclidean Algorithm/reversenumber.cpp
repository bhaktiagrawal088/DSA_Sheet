#include<iostream>
using namespace std;
// int main(){
//     int n; cin>>n;
//     while(n>0){
//         int last = n%10;
//         cout<<last;
//         n /= 10;
//     }
// }

int main(){
    int n ; cin>>n;
    int rev = 0;
    while(n>0){
        int last = n % 10;
        n = n/10;
        rev = (rev*10)+last;
    }
    cout<<rev<<endl;
}