#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top;

        Stack(int capacity){
            arr = new int[capacity];
            size = capacity;
            top = -1;
        }
        void push(int val){
            if(top == size-1){
                // stack is already full
                cout<<"Stack overflow"<<endl;
            }
            else{
                top++;
                arr[top] = val;
            }
        }

        void pop(){
            if(top == -1){
                // stack is empty
                cout<<"Stack underflow"<<endl;
            }
            else{
                arr[top] = -1;
                top--;
            }

        }

        int getsize(){
            return top+1;
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }

        int getTop(){
            if(top==-1){
                cout<<"There is no element in stack"<<endl;
                return -1;
            }        
            else{
                return arr[top];
            }
        }

        void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }
};
int main(){

    Stack s(5);
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.push(30);
    s.push(40);

    // s.push(50);
    // s.print();    

    // s.push(60);   // here it get overflows 
    // s.print();

    // cout<<s.getTop()<<endl;
    // cout<<s.getsize()<<endl;
    // cout<<s.isEmpty()<<endl;

    // s.pop();
    // s.print();

    // s.pop();
    // s.pop();
    // s.print();
    // cout<< s.getsize()<<endl;

    // s.pop();
    // s.pop();

    // s.print();

    // s.pop();

return 0;

}