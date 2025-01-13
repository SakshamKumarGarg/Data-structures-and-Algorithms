#include<iostream>
#include<queue>
using namespace std;

int main(){

    
    queue<int> q1;
    queue<int> q2;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);


    // q2.push(100);
    // q2.push(200);
    // q2.push(300);
    // q2.push(400);

    // q1.swap(q2);

    // cout<<q1.front()<<" "<<q1.back()<<endl;

    //creation

    // queue<int> q;

    // //insertion
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // // cout<<q.size()<<endl;
    // q.pop();
    // // cout<<q.size();

    cout<<q1.front()<<endl;
    cout<<q1.back()<<endl;



    // if(q.empty() == true){
    //     cout<<" q is empty"<<endl;
    // }
    // else{
    //     cout<<" q is not empty";
    // }
    


return 0;

}