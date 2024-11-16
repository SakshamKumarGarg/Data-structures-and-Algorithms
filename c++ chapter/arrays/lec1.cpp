#include<iostream>
using namespace std;

// void solve(int num[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         num[i] = num[i] + 10;
//         /* code */
//     }
//     return;
    
// }

void inputarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the value at index:"<<i<<endl;
        cin>>arr[i];
        /* code */
    }
    
}

bool findtarget(int num[], int n,int target){
    for (int i = 0; i < n; i++)
    {
        int currentelement = num[i];
        if (currentelement == target)
        {
            return true;
            /* code */
        }
        
        /* code */
    }
    return false;
    
}


int main(){
    int size;
    cin>>size;
    int arr[size];

    inputarray(arr,size);




    int target;
    cout<<"Enter target value:";
    cin>>target;

    int ans = findtarget(arr,size,target);
    cout<<ans;
    // int arr[4] = {0};

    // int size = 4;
    // solve(arr,size);
    // for (int i = 0; i<4; i++)
    // {
    //     cout<<arr[i]<<endl;
    //     /* code */
    // }
    
    // int arr[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j<3; j++){
    //     cin>>arr[i][j];
    //     /* code */
    // }
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j<3; j++){
    //     cout<<arr[i][j]<<" | ";
    //     /* code */
    // }
    // cout<<endl;
    // }
    
    
    // int a[3] = {20,30,34};
    // cin>>a[1];
    // cout<<a[2];
    // int arr[3];
    // fill(arr,arr+3,24);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    // // int arr[4];
    // int brr[] = {1,2,3,4};
    // int drr[4] = {5};

    // cout<<drr[2]<<endl;

    // cout<<drr[0]<<endl;
    // cout<<brr[1]<<endl;
    // cout<<brr[2]<<endl;
    // cout<<brr[5]<<endl;

    // int cr[6] = {23,45,64};
    // for (int i = 0; i < 6; i++)
    // {
    //     cr[i] = {23};
    //     /* code */
    // }
    // cout<<" "<<cr[0]<<" "<<cr[1]<<" "<<cr[2]<<" "<<cr[3]<<" "<<cr[4]<<" "<<cr[5]<<endl;
    
return 0;

}