#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s , int el){
    if(s.empty()){
        s.push(el);
        return ;
    }

    int top = s.top();
    s.pop();

    insertAtBottom(s, el);
    s.push(top);

}
void reversestack(stack<int> &s){
    if(s.empty()) return ;
    int top = s.top();
    s.pop();

    reversestack(s);
    insertAtBottom(s,top);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    reversestack(st);

    while( !st.empty() ){
        cout<<st.top()<<" ";
        st.pop();
    }
}