#include<iostream>
using namespace std;


    //Debug the code. Return true if the number is member of fibonacci series else false.
// int checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 || n==1){                   // && is wrong here we should use || operator
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return true;
//             }
//             else if(temp>n){
//                 return false;
//             }
//         }
//     }

// }

int main(){
    //Debug the code. Print reverse of a number
	int n,a=0;
	cin>>n;
    int z = n,digits=0;
    while(z!=0){
        z = z/10;
        digits++;;
    }
    while(n!=0){
        int k = n%10,z=digits-1;
        while(z--){
            k = k*10;
        }
        a = a + k;
        digits--;
        n = n/10;
    }
    cout<<a;

    //Debug the code. Correct the code for printing the pattern.
    /*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

    
    //Debug the code. Correct the code for printing the pattern.
    /*
Pattern for N = 4
   1
  212
 32123
4321234
*/

    // int n;
    // cin>>n;
    // int i=0,gaps = n-1;
    // while(i<n){
    //     int k=0,gaps=n-1-i;
    //     while(k<gaps){
    //         cout<<" ";
    //         k++;
    //     }
    //     int num = i+1;
    //     while(num>0){
    //         cout<<num;
    //         num = num - 1;
    //     }
    //     k = 2;
    //     while(k<=(i+1)){
    //         cout<<k;
    //         k++;
    //     }
    //     k =0;
    //     while(k<gaps){
    //         cout<<" ";
    //         k++;
    //     }
    //     i++;
    //     cout<<"\n";
    // }

    //Debug the code to print the following pattern

/*
Pattern for N = 4
4444
333
22
1
*/
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=i;j<=n;j++){
//             cout<<(n-i+1);
//         }
//         cout<<endl;
//     }
    // int ans = checkMember(1);
    // cout<<ans<<endl;
   

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