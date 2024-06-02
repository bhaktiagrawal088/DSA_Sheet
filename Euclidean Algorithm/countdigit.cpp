#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 0;
//     while(n>0){
//         int last = n % 10;
//         count ++;
//         n = n /10;
//     }
//     cout<<"Number of digits in "<<count<<endl;
//     return 0;
// }

// another way

int main(){
    int n ; cin >>n;
    int count = int(log10(n)+1); // logarithm base 10
    cout<<count;
}