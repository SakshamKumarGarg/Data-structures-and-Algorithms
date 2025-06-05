#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real;
    int imag;
    Complex(){
        real = imag - 1;
    }

    Complex(int r, int i):real(r),imag(i){};

    // Ret_type operator <op> (args){
    //     // bjdjbdg
    //     return <>
    // }

    Complex operator+(const Complex &B){
        // this -> A instance
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }
    Complex operator-(const Complex &B){
        // this -> A instance
        Complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
    }    
    bool operator==(const Complex &B){
        // this -> A instance
        return (this->real == B.real) && (this->imag == B.imag);
    
    }    


    void print(){
        printf("[%d + i%d]\n", this->real, this->imag);
    }
};

// class Add{
//     public:
//     int sum(int x, int y){
//         return x+y;
//     }
//     int sum(int x, int y, int z){
//         return x+y+z;
//     }

//     double sum(double x, double y){
//         return x+y;
//     }
// };

int main(){
    Complex A(2,5);
    A.print();
    Complex B(3,3);
    B.print();

    // Complex C = A + B;
    // C.print();

    // Complex D = A - B;
    // D.print();

    bool a = A == B;
    cout<<a <<endl;
    // int x = 5,y = 5,z = 2;
    
    // Add add;
    // cout<<add.sum(5,5)<<endl;
    // cout<<add.sum(5.3,5.5)<<endl;

    return 0;

}