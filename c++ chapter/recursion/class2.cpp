#include<iostream>
#include<algorithm>
#include<limits.h>
 
using namespace std;
bool checksorted(int arr[],int size,int index){
    if(index == size-1) return true;
    bool currans = false;
    bool recursionans = false;
    if(arr[index+1]>arr[index]) currans = true;

    recursionans = checksorted(arr,size,index+1);
    // return (currans && recursionans);   below statement is also do same thing
    if(currans == true && recursionans == true) return true;
    else return false;
}


void printdigits(int num){
    if(num==0) return;

    int newno = num/10;
    printdigits(newno);

    int ans = num%10;
    cout<<ans<<endl;
}


int binarysearch(int arr[7],int size, int s, int e, int target){
    if(s>e) return -1;

    int mid = s+(e-s)/2;
    if(arr[mid]==target) return mid;
    if(arr[mid]<target) return binarysearch(arr,size,mid+1,e,target);
    else
        return binarysearch(arr,size,s,mid-1,target);
}

void printodd(int arr[5],int size,int index){
    if(index==size) return;
    if((arr[index])%2 != 0) cout<<arr[index]<<" ";          // arr[index]&1 tells odd 
    printodd(arr,size,index+1);                             // !(arr[index]) tells even 
}


void searchmax(int arr[5],int size, int index,int &ans){
    if(index == size) return;
    ans = max(ans,arr[index]);
    if(index == size-1) cout<<ans;
    searchmax(arr,size,index+1,ans);

}

void searchmin(int arr[5],int size, int index,int &ansmin){
    if(index == size) return;
    ansmin = min(ansmin,arr[index]);
    if(index == size-1) cout<<ansmin;
    searchmin(arr,size,index+1,ansmin);

}

void searchtarget(int arr[5],int size,int target, int index){
    if(index==size) return;
    if(arr[index]==target) cout<<index;
    searchtarget(arr,size,target,index+1);

}

void printarray(int arr[5], int n, int index){
    if(index==n) return;
    cout<<arr[index]<<" ";
    printarray(arr,n,index+1);

}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int s = 0;
    int e = size-1;
    int index = 0;
    // int target = 50;
    // int ans = INT_MIN;
    // int ansmin = INT_MAX;
    // int num;
    // cin>>num;

    // printdigits(num);
    bool ans = checksorted(arr,size,index);
    cout<<ans;

    // searchmax(arr,size,index,ans);
    // searchmin(arr,size,index,ansmin);
    // searchtarget(arr,size,target,index);
    // printodd(arr,size,index);
    // int found = binarysearch(arr,size,s,e,target);
    // cout<<found;
    // printarray(arr,size,index);
    return 0;

}