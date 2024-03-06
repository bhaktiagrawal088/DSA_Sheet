#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> & st, int n){
    if(st.empty()){
        st.push(n);
    }
    else{
        int top = st.top();
        st.pop();
        insertAtBottom(st, n);
        st.push(top);
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int num  = 9;

    insertAtBottom(st,num);


    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}