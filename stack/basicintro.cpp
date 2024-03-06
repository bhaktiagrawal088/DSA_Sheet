#include<iostream>
#include<stack>
using namespace std;
int main(){
    // create a stack
    stack<int> s;
    // push the element in the stack
    cout << "Pushing elements to stack" << endl;
    s.push(2);
    s.push(3);
    s.push(6);
    while(!s.empty()) { // check  if the stack is empty or not
        cout<<s.top()<<" ";//printing top of the stack
        s.pop();       //remove the top element of the stack
    }
    cout<<endl;
    cout<<"The size of the stack"<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not  empty"<<endl;
    }
    s.push(7);
    s.push(8);
    s.push(9);
    cout<<"Size after adding more elements: "<<s.size()<<endl;
    s.pop();
    cout<<"Remove  one element and then print the size: "<<s.size()<<endl;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
}