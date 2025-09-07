#include<iostream>
using namespace std;
class CircularQueue{
public:
    int *arr;
    int front;
    int rear;
    int n;

public:
    CircularQueue(int size){
        arr = new int[size];
        front = -1;
        rear = -1;
        n = size;

    }

    void push(int val){
        if()
        
    }

};
class Queue{
public:
    int *arr;
    int front;
    int rear;
    int n;

public:
    Queue(int size){
        arr = new int[size];
        front = -1;
        rear = -1;
        n = size;

    }

    void push(int val){
        if(rear == n-1){
            cout<<"Overflow"<<endl;
        }
        else if(front == -1 && rear==-1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else{
            rear++;
            arr[rear] = val;
        }
    }

    void pop(){
        if(front == -1 && rear == -1){
            cout<<"Underflow"<<endl;
        }
        else if(front == rear){
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = -1;
            front = -1;
        }
    }

    int getfornt(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
        }
        else{
            return arr[front];
        }
    }

    int getsize(){
        if(front == -1 && rear ==-1){
            return 0;
        }
        else{
            return rear - front + 1;
        }
    }

    bool isempty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    Queue q(5);

    q.push(1);
    cout<<q.getfornt();

    cout<<q.getsize();
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.push(6);
}