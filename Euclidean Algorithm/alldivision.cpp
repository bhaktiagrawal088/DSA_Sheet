#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
// int main(){
//     int n; 
//     cin>>n;
//    for(int i = 1 ; i <= n ; i++){
//     if(n%i == 0){
//         cout<<i<<" ";
//     }
//    }
// }

int main(){
    int n; cin>>n;
    vector  <int> v;
    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            v.push_back(i);
            if(i != n/i)
                v.push_back(n/i);
        }  
    }
    sort(v.begin(), v.end());
    for(auto x : v ){
        cout<<x<<" ";
    }
}