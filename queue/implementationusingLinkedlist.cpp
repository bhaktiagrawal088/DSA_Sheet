#include<iostream>
using namespace std;
class Node{
public : 
    int data;
    Node* next;

    public:
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = rear = nullptr;
    }

    bool isEmpty(){
        return front == nullptr;
    }

    void  enQueue(int data){
        Node* newNode = new Node(data);
        if(isEmpty()){
            front = rear = newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    int  deQueue() {
        if(isEmpty()) {
            cout<<"Queue is empty";
            return -1;
        }
        else{
            int ans = front->data;
            Node* temp = front;
            if(front == rear) //Only one element present in the queue
                front=rear=nullptr;
            else
                front = front->next;
            
            delete temp;
            return ans;
        }
    }

    int peek(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return -1;
        }
        else{
            return front->data;
        }

    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty";
        }
        else{
            Node* temp = front;
            while(temp != nullptr){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

    


};
int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout<<"Queue element : ";
    q.display();

    cout<<"Peek  element of queue : "<<q.peek()<<endl;

    cout<<"Dequeue : "<<q.deQueue()<<endl;

    cout<<"Is queue empty ? \n" <<(q.isEmpty() ? "yes"  : "no")<<endl;

    cout<<"Dequeue : "<<q.deQueue()<<endl;
    cout<<"Dequeue : "<<q.deQueue()<<endl;

    cout<<"Is queue empty ?\n" <<(q.isEmpty() ? "yes"  : "no")<<endl;






}