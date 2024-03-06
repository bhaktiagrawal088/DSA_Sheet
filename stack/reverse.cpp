#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "Bhakti";
    stack<char> str;

    for(int i = 0 ;i <s.length(); i++){
        char ch = s[i];
        str.push(ch);
    }

    string ans = "";
    while(!str.empty()){
        char ch = str.top();
        ans.push_back(ch);
        str.pop();
    }

    cout<<"Reverse answer is : "<<ans<<endl;

}