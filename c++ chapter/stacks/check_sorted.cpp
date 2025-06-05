#include<bits/stdc++.h>
using namespace std;

bool checksorted(stack<int> &s,int element1){
    if(s.empty()){
        return true;
    }

    int element2 = s.top();
    s.pop();
    if(element2<element1){
        bool aagekaans = checksorted(s,element2);
        return aagekaans;
    }
    else{
        return false;
    }

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int element1 = INT_MAX;
    cout<<checksorted(s,element1)<<endl;
    return 0;

}