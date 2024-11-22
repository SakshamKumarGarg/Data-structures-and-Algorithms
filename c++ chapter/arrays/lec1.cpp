#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;

// void solve(int num[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         num[i] = num[i] + 10;
//         /* code */
//     }
//     return;
    
// }

// void printZeroandOne(int arr[],int n){
//     int zerocount = 0;
//     int onecount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i] == 0){
//             zerocount++;
//         }
//         else if (arr[i] == 1)
//         {
//             onecount++;
//             /* code */
//         }

        
//         /* code */
//     }
//     cout<<"Total zero"<<zerocount<<endl;
//     cout<<"Total one"<<onecount<<endl;
// }

void printextreme(int arr[], int n){
    int i = 0;
    int j = n-1;
    while (i<=j)
    {
        cout<<arr[i]<<" ";
        i++;
        if(j>i){
        cout<<arr[j]<<" ";
        j--;
        /* code */
    }
    }
}

// void inputarray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"enter the value at index:"<<i<<endl;
//         cin>>arr[i];
//         /* code */
//     }
    
// }

// bool findtarget(int num[], int n,int target){
//     for (int i = 0; i < n; i++)
//     {
//         int currentelement = num[i];
//         if (currentelement == target)
//         {
//             return true;
//             /* code */
//         }
        
//         /* code */
//     }
//     return false;
    
// }

int findMax(int arr[], int size){
    int MaxAns = INT_MIN; 
    for (int i = 0; i < size; i++)
    {
        MaxAns = max(MaxAns,arr[i]);
     /* code */
    }
    return MaxAns;
}

void reversearray(int arr[], int n){
    int l = 0, h = n-1;
    while (l<h)
    {
        swap(arr[l],arr[h]);
        l++;
        h--;
        /* code */
    }
    
}

int main(){
    // int size;               //BAD PRACTICE
    // cin>>size;
    // int arr[size];

    int arr[7] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    // 1 Method custom reversal using 2 pointer approach
    // reversearray(arr,n);

    //M2 STL using c++ lib
    // reverse(arr,arr+n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    //     /* code */
    // }
    

    // fill(arr,arr+2,34);
    // cout<<arr[1]<<endl;

    // cout<<100<<endl;

    // inputarray(arr,size);




    // int target;
    // cout<<"Enter target value:";
    // cin>>target;

    // int ans = findtarget(arr,size,target);
    // cout<<ans<<endl;

    cout<<"Max number is:"<<findMax(arr,n)<<endl;

    // printZeroandOne(arr,size);

    // printextreme(arr,n);
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