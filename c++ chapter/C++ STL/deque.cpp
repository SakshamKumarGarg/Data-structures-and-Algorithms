#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);

    dq.pop_front();
    dq.pop_back();

    // cout<<dq.size()<<endl;
    // cout<<dq.at(1);

    dq.erase(dq.begin(),dq.end());

    cout<<dq.size();


    // cout<<dq.front()<<endl;
    // cout<<dq.back()<<endl;

    // if(dq.empty()==true){
    //     cout<<"dq=eque is emoty";
    // }
    // else{
    //     cout<<"dq is not empty";
    // }

    // deque<int>:: iterator it = dq.begin();

    // while (it != dq.end())
    // {
    //     cout<< *it << " ";
    //     it++;
    //     /* code */
    // }
    



return 0;

}