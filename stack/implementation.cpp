#include<iostream>
#include<stack>
using namespace std;
class Stack{
public:
    int *arr;
    int size;
    int top;
    
    Stack(int size){
        this->size = size;
        arr =  new int[size];
        top = -1;
    }
    void push(int element){
        if(top == size-1){
            cout<<"Stack Overflow"<<endl;
        }
        else{ 
            top++;
            arr[top] = element;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int peek(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }
    bool isEmpty(){
       return top == -1;
    }
};
int main(){
    Stack st(5);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(24);
    st.push(25);

    // while(!st.isEmpty()){
    //     cout<<st.peek()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    cout<<"Print top most element : "<<st.peek()<<endl;
    st.pop();
    cout<<"Print top most element  after popping : "<<st.peek()<<endl;
     st.pop();
    cout<<"Print top most element  after popping : "<<st.peek()<<endl;
     st.pop();
    cout<<"Print top most element  after popping : "<<st.peek()<<endl;
     st.pop();
    cout<<"Print top most element  after popping : "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;   
}