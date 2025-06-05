#include<iostream>
using namespace std;

void linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"val found";
        }
    }
    
}
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i < n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }
}

int main(){
    // int n, sum=0;
    // cin >> n;
    // int input[n];
    // for(int i=0;i<n;i++){
    //     cin >> input[i];
    // }
    // for(int i=0; i<n; i++){
    //     sum = sum + input[i];
    // }
    // cout << sum << endl;

    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int n = 9;
    // int val = 75;
    // linearSearch(arr,n,val);

    populate(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    

    return 0;
}