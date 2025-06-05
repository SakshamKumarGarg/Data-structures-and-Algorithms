#include<iostream>
#include<algorithm>
#include<vector>
#include<forward_list>
#include<list>

using namespace std;


int main(){
    //random access iterator
    vector<int> arr = {10,20,30,40,50};
    vector<int>::iterator it = arr.begin();
    while (it != arr.end()){
        *it = *it + 7;
        cout<<*it<<" ";
        it++;

    }
    
    // forward_list<int> nums;

    // nums.push_front(10);
    // nums.push_front(20);
    // nums.push_front(30);
    // forward_list<int>::iterator it = nums.begin();

    // while(it != nums.end()){
    //     // cout<<*itr<<" ";
    //     (*it) = (*it) + 5;
    //     it++;
    // }

    // it = nums.begin();

    // while(it != nums.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }




    return 0;

}