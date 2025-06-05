#include<iostream>
#include<math.h>
using namespace std;

int decimalintobinarymethod1(int n){
    //Division method
    int binaryno = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n%2;
        binaryno = bit*pow(10,i++) + binaryno;
        n = n/2;
        /* code */
    }
    return binaryno;
    }

int decimalintobinarymethod1(int n){
    //Division method
    int binaryno = 0;
    int i = 0;
    while (n>0)
    {
        int bit = n & 1;
        binaryno = bit*pow(10,i++) + binaryno;
        n = n >> 1;
        /* code */
    }
    return binaryno;
 
}
int main(){
    int n ;
    cin>>n;
    int binary = decimalintobinarymethod1(n);
    cout<<binary<<endl;
return 0;

}