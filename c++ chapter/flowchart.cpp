#include<iostream>
using namespace std;

int main(){
    // int a = 4;
    // cout<<a/2<<endl;

    // int n;
    // cout<<"Enter n:";
    // cin>>n;
    // for (int i = n; i > 0; i--)
    // {
    //     cout<<i<<" ";
    //     /* code */
    // }

    int n;
    cin>>n;
    int fact = 1;

    for (n=7; n>=1; n--){
        fact=fact*n;
        /* code */
    }
    cout<<fact;
    
    
return 0;

}