#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main(){
    vector<int>first;
    vector<int>second;

    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);

    vector<int> result;

    // set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result, result.begin()));
    // for(int a:result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    // set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // for(int a:result){
        // cout<<a<<" ";
    // }
    // cout<<endl;

    // set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // for(int a:result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

    set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    for(int a:result){
        cout<<a<<" ";
    }     



    




    return 0;
}