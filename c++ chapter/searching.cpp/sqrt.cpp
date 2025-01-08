#include<iostream>
#include<limits.h>
using namespace std;
int mySqrt(int n) {
        int s =0;
        int e = n;
        int ans = 0;
        while(s<=e){
            int mid = s+(e-s)/2;
            int prod = mid*mid;
            if(prod==n){
                return mid;
            }
            if(prod>n){
                e = mid -1;

            }
            else{
                ans = mid;
                s = mid+1;
            }
            // mid = s+(e-s)/2;
        }
        return ans;
}


double myprecision(int n){
    double sqrt = mySqrt(n);
    int precision = 8;
    double step = 0.1;
    while (precision--){
        double j = sqrt;
        while (j*j<=n)
        {
            sqrt = j;
            j += step;            /* code */
        }
        step /= 10;
    }
    return sqrt;


}

int main(){
    int num = 63;
    double ans = myprecision(num);
    cout<<ans;   // cout only prints upto 5 precision
    printf("prescision sqrt: %.8f\n", ans);
    cout<<endl;

    

    
return 0;

}