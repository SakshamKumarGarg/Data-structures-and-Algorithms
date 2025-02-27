#include<bits/stdc++.h>
using namespace std;

void printmiddle(stack<int> &s,int count){
    if(count==0){
        cout<<s.top()<<endl;
        return;
    }

    int topElement = s.top();
    s.pop();
    count--;

    printmiddle(s,count);

    s.push(topElement);
    
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int count = s.size()/2;
    printmiddle(s,count);
    return 0;

}