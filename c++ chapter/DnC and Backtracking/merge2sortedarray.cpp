#include<bits/stdc++.h>
using namespace std;

void mergeans(int arr[],int m,int brr[],int n,vector<int> &ans){
    int i =0;
    int j =0;
    while(i<m && j<n){
        if(arr[i]<brr[j]){
            ans.push_back(arr[i]);
            i++;
        }
        else{
            ans.push_back(brr[j]);
            j++;
        }
    }

    while(i<m){
        ans.push_back(arr[i]);
        i++;
    }
    while(j<n){
        ans.push_back(brr[j]);
        j++;
    }

}

int main(){
    int arr[] = {20,40,60,80,90,100};
    int m = 6;
    int brr[] = {10,30,50,70};
    int n = 4;
    vector<int>ans;
    mergeans(arr,m,brr,n,ans);

    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;

}