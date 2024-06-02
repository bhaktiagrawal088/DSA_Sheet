#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
void printlist(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* inserthead(Node* head , int val){
    Node* temp = head;
    while(temp != nullptr){
        return new Node(val, head);
    }
    return  new Node(val);
}
int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1 ; i < size; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    cout<<"Linked list : ";
    printlist(head);
}