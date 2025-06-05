#include<iostream>
using namespace std;

int fastexpo(int a,int b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = ans*a;
        }
        a = a*a;
        b = b>>1;       // b/2;
    }
    return ans;
}

int main(){
    cout<<fastexpo(5,4);

return 0;

}