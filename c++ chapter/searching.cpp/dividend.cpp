#include<iostream>
using namespace std;

// class Solution {
// public:
//     int findans(long long dividend, long long divisor) {
//         long long s = 0;
//         long long e = dividend;
//         long long mid; // (e-s)>>1 can be divided by 2 this way also
//         long long ans = -1;
//         while (s <= e) {
//             mid = s + (e - s) / 2;
//             long long cal = divisor * mid;
//             if (cal == dividend) {
//                 return mid;
//             } else if (cal < dividend) {
//                 ans = mid;
//                 s = mid + 1;

//             } else {
//                 e = mid - 1;
//             }
//         }
//         return ans;
//     }
//     int divide(int dividend, int divisor) {
//         long long quotient =
//             findans(abs((long long)dividend), abs((long long)divisor));

//         if (dividend == INT_MIN && divisor == -1) {
//             return INT_MAX;
//         }
//         if (dividend == INT_MIN && divisor == 1) {
//             return INT_MIN;
//         }
//         if ((dividend > 0 && divisor < 0) || (dividend < 0 && divisor > 0)) {
//             return (0 - quotient);
//         }
//         if (quotient < INT_MIN) {
//             return INT_MIN;
//         } else if (quotient > INT_MAX) {
//             return INT_MAX;
//         }
//         return static_cast<int>(quotient);
//     }
// };

int findans(int dividend,int divisor){
    int s = -(dividend);
    int e = dividend;
    int mid = s+(e-s)/2;    // (e-s)>>1 can be divided by 2 this way also
    int ans;
    while(s<=e){
        if (divisor*mid==dividend){
            return mid;
        }
        else if(divisor*mid<dividend){
            s = mid+1;


        }
        else{
            e = mid -1;
        }
        mid = s+(e-s)/2;
        

    }
    return mid;
}


int main(){
    int dividend = -2147483648;
    int divisor = -1;

    int quotient= findans(abs(dividend),abs(divisor));
    if((dividend >0 && divisor<0)||(dividend<0 && divisor>0)){
        cout<<(0-quotient);
    }
    else{
        cout<<quotient;
    }
return 0;

}