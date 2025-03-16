#include<bits/stdc++.h>
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
            if((rear+1)%n == front){   //rear == n-1 && front == 0 || rear+1 == front
                cout<<"Overflow"<<endl;
            }
            else if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[rear] = val;
            }
            else if(rear == n-1){
                rear = 0;
                arr[rear] = val;
            }
            else{
                rear = (rear+1)%n;
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
                front = (front+1)%n;
            }
        }

        int getfront(){
            if(front == -1){
                cout<<"Queue is empty"<<endl;
            }
            else{
                return arr[front];
            }
        }

        int getsize(){
            if(front == -1 && rear == -1){
                return 0;
            }
            else if(front <= rear){
                return abs(rear - front + 1);
            }
            else{
                return n - abs(rear - front + 1);
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



// class Queue{
//     public:
//         int *arr;
//         int front;
//         int rear;
//         int n;
//     public:
//         Queue(int size){
//             arr = new int[size];
//             front = -1;
//             rear = -1;
//             n = size;
//         }
//         void push(int val){
//             if(rear == n-1){
//                 cout<<"Overflow"<<endl;
//             }
//             else if(front == -1 && rear == -1){
//                 front++;
//                 rear++;
//                 arr[rear] = val;
//             }
//             else{
//                 rear++;
//                 arr[rear] = val;
//             }
//         }
//         void pop(){
//             if(front == -1 && rear == -1){
//                 cout<<"Underflow"<<endl;
//             }
//             else if(front == rear){
//                 arr[front] = -1;
//                 front = -1;
//                 rear = -1;
//             }
//             else{
//                 arr[front] = -1;
//                 front++;
//             }

//         }
//         int getfront(){
//             if(front == -1){
//                 cout<<"Queue is empty"<<endl;
//             }
//             else{
//                 return arr[front];
//             }

//         }
//         int getrear(){
//             if(rear == -1){
//                 cout<<"Queue is empty"<<endl;
//             }
//             else{
//                 return arr[rear];
//             }

//         }
//         int getsize(){ 
//             if(front == -1 && rear == -1){
//                 return 0;
//             }
//             else{
//                 return rear - front + 1;

//         }
//         bool isempty(){
//             if(front == -1 && rear == -1){
//                 return true;
//             }
//             else{
//                 return false;

//             }

//         }
// };

int main(){
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<<q.getfront()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isempty()<<endl;
    q.pop();
    cout<<q.getfront()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isempty()<<endl;

    // Queue q(5);
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // cout<<q.getfront()<<endl;
    // cout<<q.getrear()<<endl;
    // cout<<q.getsize()<<endl;
    // cout<<q.isempty()<<endl;
    // q.push(60);
    // cout<<q.getfront()<<endl;
    // q.pop();
    // cout<<q.getfront()<<endl;
    // cout<<q.getrear()<<endl;
    // cout<<q.getsize()<<endl;
    // cout<<q.isempty()<<endl;


    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // cout<<q.front()<<endl;  
    // q.pop();
    // cout<<q.front()<<endl;  
    // cout<<q.size()<<endl;   
    // cout<<q.empty()<<endl;  
    // cout<<q.back()<<endl;

    // while(q.empty()==false){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    
    // deque<int> dq;
    // dq.push_front(10);
    // dq.push_front(20);
    // dq.push_front(30);
    // dq.push_back(50);
    // dq.push_back(100);
    // cout<<dq.size()<<endl;
    // cout<<dq.empty()<<endl;
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;

    // dq.pop_front();
    // dq.pop_back();
    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;



    return 0;

}