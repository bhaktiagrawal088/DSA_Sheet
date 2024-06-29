#include<iostream>
using namespace std;
bool check_palindrome(int i , string &s){
    int n  = s.size();
    if ( i >= n/2) return true;
    if (s[i] != s[n-i-1]) return false;
    return check_palindrome(i+1, s);
}
int main(){
    string s;
    getline(cin, s);
    cout<<check_palindrome(0, s);
    return 0;
}