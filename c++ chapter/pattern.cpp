#include<iostream>
using namespace std;

int main(){

    // HOLLOW RECTANGLE PATTEREN
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            if(r==0||r==3){
                cout<<" * ";
            }
            else if(c==0||c==4){
                cout<<" * ";
            }
            else{
                cout<<"   ";

            }
            /* code */
        }
        cout<<endl;
        
        /* code */
    }
    

    
    
    

    // int length,width;
    // cout<<"enter length:";
    // cin>>length;

    // cout<<"Enter width:";
    // cin>>width;

    // for (int r = 0; r < length; r++)
    // {
    //     for (int c = 0; c < width; c++)
    //     {
    //         cout<<" * ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    


    // int side;
    // cout<<"Enter value of size of square:";
    // cin>>side;

    // for (int r = 0; r <= side; r++)
    // {
    //     for (int c = 0; c < side; c++)
    //     {
    //         cout<<" * ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    

    // for (int row = 0; row < 4; row++)
    // {
    //     for (int col = 0; col < 4; col++)
    //     {
    //         cout<<"*";
    //         /* code */
    //     }
    //     cout<<endl;
    //     /* code */
    // }
    
return 0;

}