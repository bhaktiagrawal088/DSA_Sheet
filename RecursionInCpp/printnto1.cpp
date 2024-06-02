#include<vector>
#include<iostream>
using namespace std;

vector<int> printNos(int x) {
    vector<int> r;
    if (x < 0) {
        return r;
    } else {
        r.push_back(x);
        r = printNos(x - 1);
        return r;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v=printNos(n);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}