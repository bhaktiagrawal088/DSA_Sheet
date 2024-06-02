#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(islower(ch)){
        cout<<"0";
    }

    else if(isupper(ch)){
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
    return 0;
}
