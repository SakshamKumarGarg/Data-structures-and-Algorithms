#include<bits/stdc++.h>
using namespace std;

class CircularDeque{
    public:
        int *arr;
        int front;
        int rear;
        int n;
    public:
        CircularDeque(int size){
            arr = new int[size];
            front = -1;
            rear = -1;
            n = size;
        }

        void pushFront(int val){
            if((rear+1)%n == front){
                cout<<"Overflow"<<endl;
            }
            else if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[front] = val;
            }
            else{
                front = (front-1+n)%n;
                arr[front] = val;
            }
        }

        void pushBack(int val){
            if((rear+1)%n == front){
                cout<<"Overflow"<<endl;
            }
            else if(front == -1 && rear == -1){
                front++;
                rear++;
                arr[rear] = val;
            }
            else{
                rear = (rear+1)%n;
                arr[rear] = val;
            }
        }

        void popFront(){
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

        void popBack(){
            if(front == -1 && rear == -1){
                cout<<"Underflow"<<endl;
            }
            else if(front == rear){
                arr[rear] = -1;
                front = -1;
                rear = -1;
            }
            else{
                arr[rear] = -1;
                rear = (rear-1+n)%n;
            }
        }

        void print(){
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};


// class Deque{
//     public:
//         int *arr;
//         int front;
//         int rear;
//         int n;

//     public:
//         Deque(int size){
//             arr = new int[size];
//             front = -1;
//             rear = -1;
//             n = size;
//         }
//         void pushFront(int val){
//             if(front == 0){
//                 cout<<"Overflow"<<endl;
//             }
//             else if(front == -1 && rear == -1){
//                 front++;
//                 rear++;
//                 arr[front] = val;
//             }
//             else{
//                 front--;
//                 arr[front] = val;
//             }
//         }

//         void pushBack(int val){
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

//         void popFront(){
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

//         void popBack(){
//             if(front == -1 && rear == -1){
//                 cout<<"Underflow"<<endl;
//             }
//             else if(front == rear){
//                 arr[rear] = -1;
//                 front = -1;
//                 rear = -1;
//             }
//             else{
//                 arr[rear] = -1;
//                 rear--;
//             }
//         }
//         void print(){
//             for(int i=0; i<n; i++){
//                 cout<<arr[i]<<" ";
//             }
//             cout<<endl;
//         }
// };

int main(){
    // Deque dq(5);
    // dq.pushFront(10);
    // dq.print();
    // dq.pushFront(20);
    // dq.print();
    // dq.pushFront(30);
    // dq.pushBack(40);
    // dq.pushBack(50);
    // dq.print();
    // dq.popFront();
    // dq.popBack();


    return 0;

}