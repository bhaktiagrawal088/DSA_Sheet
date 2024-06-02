#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(3);
    cout<<"Front of the queue : "<<q.front()<<endl; //prints 3
    q.push(5);
    cout<<"Front of the queue : "<<q.front()<<endl; //prints 3
    q.push(7);
    cout<<"Front of the queue : "<<q.front()<<endl; //prints 3
    cout<<"Size of queue : "<<q.size()<<endl;



    q.pop();
    cout<<"After pop one element size of queue : "<<q.size()<<endl;
    cout<<"Front of the queue : "<<q.front()<<endl; //prints 5


    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }


}
