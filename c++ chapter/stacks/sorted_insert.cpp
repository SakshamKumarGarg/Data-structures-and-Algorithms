#include<bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int> &s,int val){
    if(!s.empty() && s.top()<val){    // always make sure to check stack is empty
        s.push(val);
        return;
    }

    int topE = s.top();
    s.pop();
    sortedinsert(s,val);

    s.push(topE);
}

void print(stack<int> &s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int val = 23;

    sortedinsert(s,val);
    print(s);
    return 0;

}