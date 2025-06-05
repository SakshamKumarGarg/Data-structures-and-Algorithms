#include<iostream>
using namespace std;

// int findUniqueNumber(int arr[],int n){
//     int ans = 0;
//     //to find the final answer we need to XOR all the numbers in the array

//     for (int i = 0; i < n; i++)
//     {
//         ans = ans^arr[i];
//         /* code */
//     }
//     return ans;
    
// }
void sort(int arr[], int n){
    int zerocount = 0;
    int onecount = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            zerocount++;
        }
        else if (arr[i] == 1)
        {
            onecount++;
            /* code */
        }
        /* code */
    }

    for (int i = 0; i < zerocount; i++)
    {
        arr[i] = 0;
        /* code */
    }
    for (int i = zerocount; i < n; i++)
    {
        arr[i] = 1;
        /* code */
    }
    
    
    
}
pair<int,int> checktwoSum(int arr[],int n,int target){
    pair<int,int> ans = make_pair(-1,-1);
    for(int i = 0; i< n; i++){
        for (int j = 0; j< n; j++)
        {
            if (arr[i] + arr[j] == 35)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
                /* code */
            }       /* code */
        }    
    }
    return ans;
}


void checkthreeSum(int arr[],int n,int target){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k<n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;

                    /* code */
                }
                
                /* code */
            }
            
            /* code */
        }
        
        /* code */
    }
    

}


void rotatearray(int arr[],int n, int shift){
    int finalshift = shift%n;
    if(finalshift ==0){
        return;
    }
    int temp[1000];
    int index = 0;
    for (int i = n - finalshift; i < n; i++)
    {
        temp[index] = arr[i];
        index++;
    }
    for (int i = n-1; i >=0; i--)
    {
        arr[i] = arr[i-finalshift];
    }
    for (int i = 0; i < finalshift; i++)
    {
        arr[i] = temp[i]; 
    }    
}


int main(){
    int arr[6] = {10,20,30,40,50,60};
    int size = 6;
    int target = 70;
    int shift = 2;

    cout<<"Before:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
        /* code */
    }
    cout<<endl;
    
    // rotatearray(arr,size,shift);

    // cout<<"After:"<<endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    //     /* code */
    // }
    

    checkthreeSum(arr,size,target);

    // pair<int,int> ans = checktwoSum(arr,size,target);
    // if (ans.first == -1 && ans.second == -1)
    // {
    //     cout<<"pair not found";
    //     /* code */
    // }
    // else{
    //     cout<<"pair found:"<<ans.first<<" , "<<ans.second<<endl;
    // }
    

    // int arr[4] = {10,20,30,40};
    // int size = 4;
    
    // //Print all the pairs of arrays
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout<<arr[i]<<" ";
    //         cout<<arr[j]<<endl;
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    
    // int arr[7] = {0,1,1,0,0,1,1};
    // int size = 7;

    // sort(arr,size);

    // for (int i = 0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }
    


    // int arr[] = {2,4,1,4,1};

    // int size = 5;

    // int ans = findUniqueNumber(arr,size);
    // cout<<"Unique number is:"<<ans<<endl;
    return 0;

}