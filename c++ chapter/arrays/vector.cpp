#include<iostream>
#include<vector>

using namespace std;

// void fun(int arr[],int n){
//     cout<<"array Elemrnts are:"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<endl;
//         /* code */
//     }
    
// }
void print(vector<int>v){
    int size = v.size();
    cout<<"Printing Vector"<<endl;
    for (int i = 0; i < size; i++)
    {
        // cout<<v[i]<<endl;
        cout<<v.at(i)<<endl;
        /* code */
    }
    
}

void print2(vector<int>v){
    cout<<"Printing vector:"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
}


int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // print2(v);
    // vector<char>v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');

    // cout<<"Front Element:"<<v[0]<<endl;
    // cout<<"Front Element:"<<v.front()<<endl;
    // cout<<"Front Element:"<<v.back()<<endl;
    // cout<<"End Element:"<<v[v.size()-1]<<endl;


    // vector<int>arr; //default with no data 0 size
    // vector<int>arr2(5, -1); //init with n size with specific data
    // arr2.push_back(50);
    // print(arr2);

    // vector<int>arr3 = {1,2,3,4,5};
    // arr3.pop_back();
    // print(arr3);

    // vector<int>arr4{1,2,3,4};
    // print(arr4);

    // vector<int>arr5{arr4};
    // print(arr5);
 

    // vector<int>v;
    // int n;
    // cin>>n;

    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     /* code */
    // }
    // print(v);
    
    // // for (int i = 0; i < 10; i++)
    // // {
    // //     v.push_back(80);
    // //     /* code */
    // // }

    // v.clear();
    // v.push_back(50);


    // print(v);
    

    // while (1)
    // {
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity:"<<v.capacity()<<"size :"<<v.size()<<endl;
    //     /* code */
    // }

    //pop -> delete -> END
    

    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);

    // v.pop_back();
    // print(v);

    // v.pop_back();
    // print(v);
    // in vector don't tell size of vector i will manage the allocation

    // int n;
    // cin>>n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     int data;
    //     cin>>data;
    //     arr[i] = data;
    //     /* code */
    // }
    
    // // let me try to insert more item
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[n+i]= 80;
    //     /* code */
    // }
    

    // fun(arr,n);


return 0;

}