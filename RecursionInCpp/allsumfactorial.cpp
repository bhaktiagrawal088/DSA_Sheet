#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else {
        int result =  n * fact(n - 1);
        if( n < result){
            return n;
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> r;

    cout<<fact(n);
}