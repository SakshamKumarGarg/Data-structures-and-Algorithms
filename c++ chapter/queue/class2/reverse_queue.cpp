#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}


void reverseQueueRec(queue<int> &q){
    if(q.empty()){
        return;
    }

    int frontelement  = q.front();
    q.pop();

    reverseQueueRec(q);

    q.push(frontelement);
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    // reverseQueue(q);
    reverseQueueRec(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;

}