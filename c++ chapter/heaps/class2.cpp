#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    pq.push(15);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();

    // priority_queue<int> pq;   // by default max heap
    // pq.push(10);
    // pq.push(5);
    // pq.push(30);
    // pq.push(15);
    
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // cout<<pq.size()<<endl;


    return 0;

}