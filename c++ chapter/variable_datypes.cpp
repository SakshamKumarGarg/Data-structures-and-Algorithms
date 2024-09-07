#include<iostream>
#include<iomanip>
using namespace std;

int main(){
//     int age = 25;
//     cout<<"My Age is:"<<age<<endl;

//     double number = 55.34567;
//     cout<<fixed<<setprecision(5)<<number<<endl;
// return 0;
       // int age = 12;
       // cout<<sizeof(int)<<endl;
       int height;
       cout<<"Enter height:";
       cin>>height;

       int weight;
       cout<<"Enter weight:";
       cin>>weight;

       if(height>5){
              if (weight>70)
              {
                     cout<<"A";
                     /* code */
              }
              else{
                     cout<<"B";
              }
              
       }
       else{
              cout<<"C";
       }
       return 0;
}