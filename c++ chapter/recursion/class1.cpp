#include<iostream>
using namespace std;
    int sum(int n){
        if(n==0){
            return 0;
        }
        int ans = n+sum(n-1);
        return ans;
    }
    int fibonacci(int n){ 
        if(n==0){                          // Base condition 
            return 0;
        }
        if(n==1){
            return 1;
        }
        int ans = fibonacci(n-1) + fibonacci(n-2);
        return ans;
    }

    int getpower(int n){
        if(n==0){
            return 1;

        }
        return 2*getpower(n-1);
    }
    int counting(int n){
        if(n==1){
            return 1;
        }
        cout<<n<<" ";
        counting(n-1);
    }
    int startcounting(int n){
        if(n==0){
            return 0;
        }
        startcounting(n-1);
        cout<<n<<" ";
    }
    int factorial(int n){
        if(n==0||n==1){
            return 1;
        }
        return n*factorial(n-1);
    }    
int main(){
    int n;
    cin>>n;
    // int getsum = sum(n);
    // cout<<getsum;
    // int fibo = fibonacci(n);
    // cout<<fibo;

    // int power = getpower(n);
    // cout<<power<<endl;

    // int count = counting(n);
    // cout<<count<<endl;
    // int ans = factorial(n);
    // cout<<ans;

    return 0;

}