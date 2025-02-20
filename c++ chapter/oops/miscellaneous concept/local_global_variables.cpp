#include<bits/stdc++.h>
using namespace std;

int x = 2; // global variable

void fun(){
    int x = 60;
    cout<<x<<endl;
    ::x = 40;
    cout<<::x<<endl;
}

int main(){
    x = 4; // global x 

    int x = 20;      // local to main fxn 
    cout<<x<<endl;
    cout<<::x<<endl;

    {  
        int x = 50; 
        {
            int x = 44;
            cout<<x<<endl; 
        }                           // 44 is not in memory after this 
        cout<<x<<endl;
    }     

    fun();
    
    cout<<::x<<endl;   // now value of global x changes to 40 from 4

return 0;

}