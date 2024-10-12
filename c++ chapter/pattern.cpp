#include<iostream>
using namespace std;

int main(){
    // Hollow Pyramid
    int n;
    cin>>n;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < n-r-1; c++){
            
        cout<<" ";
        }

        for(int c = 0; c<r+1; c++){
            if ((c==1 && r == 2) || (c==1 && r == 3) || (c==2 && r == 3))
            {
                cout<<"  ";
                /* code */
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
   
    

    //Diamond Pattern
    // int n;
    // cout<<"Enter n:";
    // cin>>n;
    // for (int r = 0; r < n; r++){
    //     for (int c = 0; c < n-r-1; c++){
    //     cout<<" ";
    //     }

    //     for(int c = 0; c<r+1; c++){
    //     cout<<"* ";
    //     }
    //     cout<<endl;

    // }
    // for (int r = 0; r < n; r++)
    // {
    //     for (int c = 0; c < r; c++){
    //     cout<<" ";
    //     }

    //     for(int c = 0; c<n-r; c++){
    //     cout<<"* ";
    //     }
    //     cout<<endl;

    // }


    //Inverted Full Pyramid Pattern
    // int n;
    // cout<<"Enter n:";
    // cin>>n;
    // for (int r = 0; r < n; r++)
    // {
    //     for (int c = 0; c < r; c++){
    //     cout<<" ";
    //     }

    //     for(int c = 0; c<n-r; c++){
    //     cout<<"* ";
    //     }
    //     cout<<endl;

    // }
    
    //Full Pyramid Pattern           //we can use for loop even without curly braces
    // int n;
    // cout<<"Enter n:";
    // cin>>n;
    // for (int r = 0; r < n; r++)
    // {
    //     for (int c = 0; c < n-r-1; c++){
    //     cout<<" ";
    //     }

    //     for(int c = 0; c<r+1; c++){
    //     cout<<"* ";
    //     }
    //     cout<<endl;

    // }
    
    
    //Numeric inverted half pyramid
    // for (int r = 0; r < 4; r++)               // ANOTHER METHOD
    // {
    //     for (int c = 0; c < (4-r); c++)
    //     {
    //         cout<<c+1<<" ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }

    //NUMERIC HALF PYRAMID
    // for (int r = 0; r < 5; r++)
    // {
    //     for (int c = 0; c < r+1; c++)  // we can also put c<=r than c < r+1
    //     {
    //         cout<<(c+1)<<" ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }


    //INVERTED HOLLOW HALF PYRAMID PATTERN
    // for (int r = 0; r < 6; r++)
    // {
    //     for (int c = 0; c < (6-r); c++)
    //     {
    //         if (r==0||r==4||r==5)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
    //         else if (c==((6-r)-1)||c==0)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
            
    //         else
    //         {
    //             cout<<"   ";
    //             /* code */
    //         }
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }

    //HOLLOW HALF PYRAMID PATTERN
    // for (int r = 0; r < 6; r++)
    // {
    //     for (int c = 0; c < r+1; c++)
    //     {
    //         if (r==0||r==1||r==5)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
    //         else if (c==r||c==0)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
            
    //         else
    //         {
    //             cout<<"   ";
    //             /* code */
    //         }
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }

    // for (int r = 0; r < 6; r++)              //ANOTHER METHOD
    // {
    //     for (int c = 0; c < r+1; c++)
    //     {
    //         if (r==0||r==1||r==5||c==0||c==r)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
    //         else{
    //             cout<<"   ";
    //         }
            
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    
    

    //INVERTED HALF PYRAMID
    // for (int r = 3; r >= 0; r--)
    // {
    //     for (int c = r; c>=0; c--)
    //     {
    //         cout<<" * ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }

    // for (int r = 0; r < 4; r++)               // ANOTHER METHOD
    // {
    //     for (int c = 0; c < (4-r); c++)
    //     {
    //         cout<<" * ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    
    



    //Half Pyramid Pattern
    // for (int r = 0; r < 5; r++)
    // {
    //     for (int c = 0; c < r+1; c++)  // we can also put c<=r than c < r+1
    //     {
    //         cout<<" * ";
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    

    //HOLLOW SQUARE
    // for (int r = 0; r < 5; r++)
    // {
    //     for (int c = 0; c < 5; c++)
    //     {
    //         if (r==0||r==4)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
    //         else if (c==0||c==4)
    //         {
    //             cout<<" * ";
    //             /* code */
    //         }
    //         else{
    //             cout<<"   ";
    //         }
            
            
    //         /* code */
    //     }
    //     cout<<endl;
    //             /* code */
    // }
    

    // HOLLOW RECTANGLE PATTEREN
    // for (int r = 0; r < 4; r++)
    // {
    //     for (int c = 0; c < 5; c++)
    //     {
    //         if(r==0||r==3){
    //             cout<<" * ";
    //         }
    //         else if(c==0||c==4){
    //             cout<<" * ";
    //         }
    //         else{
    //             cout<<"   ";

    //         }
    //         /* code */
    //     }
    //     cout<<endl;
        
    //     /* code */
    // }
    

    
    
    

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