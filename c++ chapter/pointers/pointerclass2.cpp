#include<iostream>
using namespace std;
#include<vector>


// void solve(int *arr,int size){
    // cout<<sizeof(arr)<<endl;
// }

// void solve(vector<int> &v){
//     cout<<sizeof(v)<<endl;

// }


int main(){
    int a = 5;
    int *ptr = &a;
    int **q = &ptr;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<&q<<endl;
    cout<<**q<<endl;
    cout<<**q<<endl;
    
    
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // solve(v);


    // int arr[] = {10,20,30,40,50};
    // int size = 5;

    // solve(arr,size);

return 0;

}