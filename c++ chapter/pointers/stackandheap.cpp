#include<iostream>
using namespace std;

int main(){
    int **arr = new int*[4];         // 4-> row count 
    for (int i = 0; i < 4; i++)
    {
        arr[i] = new int[3];        // 3 -> column count
        /* code */
    }
    
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
            /* code */
        }
        cout<<endl;
        
    }
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
            /* code */
        }
        cout<<endl;
        
        /* code */
    }
    

    // int arr[5] = {0};


    // int *brr = new int[5];
    // cout<<brr[0]<<brr[1]<<brr[2];

    // int a = 5;

    // int *p = new int;
    // *p = 5;
    // cout<<*p<<endl;

    // delete p;       // deallocate 


return 0;

}