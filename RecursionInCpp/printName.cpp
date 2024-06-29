#include<iostream>
using namespace std;
int printName(int name){
    if(name < 1){
        return -1;
    }else{
        cout<<"Bhakti ";
        printName(name-1);
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    printName(n);
    return 0;
}