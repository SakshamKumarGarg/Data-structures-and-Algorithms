#include<iostream>
using namespace std;

int main(){
    int a = 5;
    // int &b = a;
    // cout<<b<<endl;
    // cout<<&b<<endl;
    // // cout<<*b<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // int *ptr = &a;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    // cout<<&(*ptr)<<endl;
    // cout<<*(&a)<<endl;
    // cout<<&ptr<<endl;

    // cout<<endl;
    // cout<<sizeof(ptr)<<endl;

    // float f = 1.4;
    // float *fptr = &f;
    // cout<<sizeof(ptr)<<endl; 

    // int *q = ptr;            // copying value of ptr in q 
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q;


    // int arr[] = {10,20,30};
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // int *ptr = arr;

    // ptr = ptr+1;
    // cout<<*ptr<<endl;

    // ptr = ptr +1;
    // cout<<*ptr<<endl;

    // cout<<ptr<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[2]<<endl;

    // cout<<*(arr+2)<<endl;    //Important
    // cout<<2[arr];   // arr[2] = 2[arr]   both are same in arrays

    //character arrays pointer 
    // char ch[100] = "Saksham";
    // char *cptr = ch;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<cptr<<endl;    // print full string

    // cout<<*cptr<<endl;
    // cout<<&cptr<<endl;
    // cout<<*(cptr+3)<<endl;
    // cout<<cptr+3<<endl;
    // cout<<cptr+1<<endl;

    char ch = 'a';
    char *cptr = &ch;

    cout<<cptr<<endl;


return 0;

}