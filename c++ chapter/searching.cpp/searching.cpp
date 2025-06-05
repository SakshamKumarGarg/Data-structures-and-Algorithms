#include<iostream>
using namespace std;

findFirstoccurence(int arr[],int n, int target,int &ansIndex){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2; 
    while (s<=e)
    {
        if (arr[mid]==target)
        {
            ansIndex = mid;
            e = mid - 1;
    /* code */
        }
        else if(target>arr[mid]){
            s = mid + 1;
        }
        else if (target<arr[mid])
        {
            e = mid - 1;
            /* code */
        }
        mid = s + (e-s)/2;
        
        /* code */
    }
    
}
findlastoccurence(int arr[],int n, int target,int &anslastIndex){
    int s =0;
    int e = n-1;
    int mid = s + (e-s)/2; 
    while (s<=e)
    {
        if (arr[mid]==target)
        {
            anslastIndex = mid;
            s = mid + 1;
    /* code */
        }
        else if(target>arr[mid]){
            s = mid + 1;
        }
        else if (target<arr[mid])
        {
            e = mid - 1;
            /* code */
        }
        mid = s + (e-s)/2;
        
        /* code */
    }
    
}
void totalcount(int arr[],int n,int target,int &indexcount){
    for (int i = 0; i < n; i++)
    {
        if(target == arr[i]){
            indexcount++;
        }
        /* code */
    }
    cout<<indexcount;
    
}


int main(){

    int arr[] = {10,20,20,20,20,20,20,30,40,50,60};
    int n = 11;

    int target = 20;
    int indexcount = 0;
    int ansIndex = -1;
    int anslastIndex = -1;
    // findFirstoccurence(arr,n,target,ansIndex);
    // findlastoccurence(arr,n,target,anslastIndex);
    // cout<<ansIndex<<endl;
    // cout<<anslastIndex;

    totalcount(arr,n,target,indexcount);
return 0;

}