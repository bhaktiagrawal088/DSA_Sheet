#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data , Node* next){
        this->data  = data;
        this->next = next;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
void printlist(Node* head){
    Node* temp = head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int isPresent(Node * head, int val){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
int printlength(Node* head){
    Node* temp =  head;
    int cnt = 0;
    while(temp != nullptr){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = new Node(arr[0]);
    Node* temp =  head;
    for(int i = 1 ; i <size; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    cout<<"Linked list: ";
    printlist(head);
    cout<<"\n2 is present is in linked list or not: " ;
    cout<<isPresent(head, 2);
    cout<<"\n7 is present is in linekd list or not: ";
    cout<<isPresent(head, 7);
    cout<<"\nLenght of the linek list: ";
    cout<<printlength(head);
}