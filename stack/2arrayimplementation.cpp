#include<iostream>
#include<stack>
using namespace std;

class Stack{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int x) {
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = x;
        }
        else{
            cout<<"Stack 1 Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1 == -1){
            cout<<"Stack 1 underflow"<<endl;
            return -1;
        }
        else{
            int x = arr[top1];
            top1--;
            return x;
        }
    }
    void push2(int x){
        if(top2 - top1 > 0){
            top2--;
            arr[top2] = x;
        }
        else{
            cout<<"Stack 2 Overflow"<<endl;
        }
    }
    int pop2(){
        if(top2  == size){
            cout<<"Stack 2 underflow"<<endl;
            return -1;
        }
        else{
            int x = arr[top2];
            top2++;
            return x;
        }
    }
    bool isEmpty1(){
        if(top1 == -1){
            return true;
        }
        return false;
    }
};
int main(){
    Stack str(5);
    str.push1(22);
    str.push1(23);
    str.push1(45);
    str.push2(1);
    str.push2(3);
    str.push2(3);

    cout<<"Popped from stack 1 : "<<str.pop1()<<endl;
    cout<<"Popped from stack 2 : "<<str.pop2()<<endl;

}