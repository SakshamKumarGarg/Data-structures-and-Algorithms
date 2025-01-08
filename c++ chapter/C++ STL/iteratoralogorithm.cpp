#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void printdouble(int a){
    cout<<2*a<<" ";
}

bool checkeven(int a){
    return a%2 == 0;
}

int main(){
    vector<int> arr(6);

    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;

    // auto it = partition(arr.begin(),arr.end(),checkeven);
    // for(int a:arr){
    //     cout<<a<<" ";
    // }




    // auto it = unique(arr.begin(),arr.end());
    // arr.erase(it,arr.end());
    // for(int a:arr){
    //     cout<< a <<" "; 
    // }


    // int target = 11;

    // sort(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<< a<<" ";
    // }
    // cout<<endl;

    // // reverse(arr.begin(),arr.end());
    // // for(int a : arr){
    // //     cout<< a<<" ";
    // // }
    // cout<<endl;

    // rotate(arr.begin(),arr.begin()+1,arr.end());
  
    // for(int a : arr){
    //     cout<< a<<" ";
    // }



    // int ans = count(arr.begin(),arr.end(),target);
    // cout<<ans;

    // int ans = count_if(arr.begin(),arr.end(),checkeven);

   // cout<<ans;


    auto it = find_if(arr.begin(),arr.end());
    cout<<*it<<endl;

    // for_each(arr.begin(),arr.end(),printdouble);

    // int target = 40;

    // find(arr.begin(),arr.end(),target);
    // vector<int>::iterator it = find(arr.begin(),arr.end(),target);
    // auto it=find(arr.begin(),arr.end(),target);
    // cout<<*it<<endl; 





    return 0;
}