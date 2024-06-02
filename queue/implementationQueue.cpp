#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int  front,rear;
    int  size;
public:
    Queue(){
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }
    void enQueue(int x){
        if( rear == size){
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear] = x;
            rear++;
        }
    }
    int  deQueue(){
        if(front == rear){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int peek(){
        if(isEmpty()){
            cout << "The queue is Empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue q;
    q.enQueue(4);
    q.enQueue(7);
    q.enQueue(9);
    cout<<"Queue element :  ";
    while(!q.isEmpty()){
        cout<< q.peek() << " ";
        q.deQueue();
    }


}