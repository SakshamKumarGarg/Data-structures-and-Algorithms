#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

int getlength(char arr[],int n){
    int index = 0;
    int count = 0;
    while (arr[index] != '\0')
    {
        count++;
        index++;
    }
    return count;
}


void convertintouppercase(char arr[],int n){
    int len = getlength(arr,n);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        ch = ch - 'a'+'A';
        arr[i] = ch;
    }
}


void reversechararray(char arr[],int n){
    int len = getlength(arr,n);
    int l=0; 
    int h = len-1;
    while(l<=h){
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
}


bool checkpalindrome(char arr[],int n){
    int len = getlength(arr,n);
    int l = 0;
    int h = len-1;
    while(l<=h){
        if(arr[l]==arr[h]){
            l++;
            h--;
        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    
    
    cout<<s;
    char arr[100];
    // cin.getline(arr,100,'\t'); 
    cin.get(arr,100);
    cout<<arr;
    // char arr1[100];
    // cout<<"enter the input"<<endl;
    // cin>>arr1;

    // char arr2[100];
    // cout<<"enter the input"<<endl;
    // cin>>arr2;
    
    // cout<<strcat(arr1,arr2)<<endl;


    // char arr[1000];
    // int n = 1000;
    // cin.getline(arr,1000);
    // cout<<checkpalindrome(arr,n);
    // cout<<"enter your name:"<<endl;
    // convertintouppercase(arr,n);
    // reversechararray(arr,n);
    // cout<<arr<<endl;
    // cin>>arr;   // it only prints first word 
    // cin.getline(arr,1000,'\t');  // to get full name
    // int ans = getlength(arr,n);
    // cout<<ans;
    // cout<<"your name is :"<<arr<<endl;
    // cout<<arr[0]<<" "<<(int)arr[0];
    
    return 0;

}