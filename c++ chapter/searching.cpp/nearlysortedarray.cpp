#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;

        }
        if(arr[mid+1]==target){
            return mid+1;

        }
        if(arr[mid-1]==target){
            return mid-1;
        }
        else if(arr[mid]<target){
            s = mid +2;

        }
        else{
            e = mid-2;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[8] = {10,3,40,20,30,50,80,70};
    int n = 8;
    int target = 80;
    int ans = binarysearch(arr,n,target);
    cout<<ans;
return 0;


}