#include<iostream>
using namespace std;
int ifprime(int N){
        if (N<=1)
        {
            return false;    /* code */
        }
        for(int i = 2; i < N; i++){
        if ((N%i)==0)
        {
            return false;    /* code */
        }
        }
        return true;    
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        bool checkprime = ifprime(i);
        if (checkprime)
        {
            cout<<"Prime no:"<<i<<endl;   /* code */
        }
        else{
            cout<<"Not Prime:"<<i<<endl;
        }    /* code */
    }
return 0;

}