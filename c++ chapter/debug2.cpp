#include<iostream>
using namespace std;


    //Debug the code. Return true if the number is member of fibonacci series else false.
int checkMember(int n){
    int f1 = 1, f2 = 1;
    if(n==0 || n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return true;
            }
            else if(temp>n){
                return false;
            }
        }
    }

}

int main(){

    int ans = checkMember(1);
    cout<<ans<<endl;
   

       //Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)
    // int n, flag=1;
    // cin>>n;
    // for(int i=2;i<=n;i++){
    //     flag = 1;
    //     for(int j=2;j<=i/2;j++){
    //         if(i%j==0){
    //             flag = 0;
    //         }
    //     }
    //     if(flag==1){
    //         cout<<i<<endl;
    // //     }
    // }


    // Debug the code. This code is trying to calculate area of a rectangle.

	// double width, height;
	// cin >> width >> height;
	// double area = width * height;
	// cout << area << endl;

return 0;

}