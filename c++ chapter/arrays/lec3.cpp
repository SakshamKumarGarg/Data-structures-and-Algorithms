#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

bool search2Darray(int arr[3][4],int rowsize, int colsize, int target){
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            if (arr[i][j] == target)
            {
                return true;    /* code */
            }    /* code */
        }    /* code */
    }
    return false;
}
int findMIN2Darray(int arr[][4], int rowSize, int colsize)
{
    int minvalue = INT_MAX;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            minvalue = min(arr[i][j], minvalue);
            /* code */
        }
        return minvalue;
    }
}

int main(){
    // int arr[3][3] = {

    //     {10,11,12},
    //     {21,22,23},
    //     {30,31,32}
    // };

    // int rowSize = 3;
    // int colsize = 3;

    // int ans[100][100];

    // for (int i = 0; i < rowSize; i++)
    // {for (int j = i; j < colsize; j++)
    // {
    //     swap(arr[i][j],arr[j][i]);
    //     /* code */
    // }
    
    //     /* code */
    // }

    // for (int i = 0; i < rowSize; i++)
    // {for (int j = 0; j < colsize; j++)
    // {
    //     cout<<arr[i][j]<<" ";
    //     /* code */
    // }
    // cout<<endl;
    
    //     /* code */
    // }
    
    

    vector<vector<int>>arr(4,vector<int>(3,0));
    int rowSize = arr.size();
    int colsize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cin>>arr[i][j];

            /* code */
        }
        cout<<endl;
        
        /* code */
    }

    // int ans = findMIN2Darray(arr,rowSize,colsize);
    // cout<<ans;
    
    // int arr[3][4] = {

    //     {10,11,12,13},
    //     {21,22,23,24},
    //     {30,31,32,33}
    // };

    // int rowsize = 3;
    // int colsize = 4;
    // int target = 21;

    // bool ans = search2Darray(arr,rowsize,colsize,target);
    // cout<<ans;

return 0;

}