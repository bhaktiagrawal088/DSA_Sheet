#include<iostream>
#include<stack>
using namespace std;
void deletemiddle(stack<int> &st, int count, int size){
    if(count == size/2){
        st.pop();
        cout<<"delete"<<endl;
        return;

    }
     
    int num = st.top();
    st.pop();

    // recursion call
    if(!st.empty()){
        deletemiddle(st, count+1, size);
        st.push(num);
    }
}

int main(){
    stack<int> str;
    str.push(3); 
    str.push(5);    
    str.push(9);
    str.push(6);  
    str.push(4);

    int size = str.size();
    cout<<size;
    int count = 0;
    deletemiddle(str , count , size);

    while(!str.empty()){
        cout<<str.top()<<endl;
        str.pop();
    }
}