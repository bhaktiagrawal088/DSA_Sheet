#include<iostream>
using namespace std;
class Queue{
    public:
    int* arr;
    int size;
    int front, rear;

    public:
    Queue(int n){
        size  = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool  enqueue(int x) {
        if((front == 0 && rear == size-1) || (rear == (front-1) % (size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front == -1){ // first element to push
            front = rear = 0;
        }
        else if(rear == size - 1 && front != 0 ){
            rear = 0;
        }
        else{
            rear++;

        }

        arr[rear] = x;
        return true;

    }

    int  dequeue() {
        if(front == -1 ){
            cout<<"Queue is empty";
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ // single element in the queue
            front = rear = -1;
        }
        else if(front == size -1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

     void display() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % size;
        } while (i != (rear + 1) % size);
        cout << endl;
    }

};
int main(){
    Queue q(7);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.display();
}