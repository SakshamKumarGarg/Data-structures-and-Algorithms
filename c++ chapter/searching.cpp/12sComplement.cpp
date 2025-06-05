#include<iostream>
// #include<unordered_map>
#include<vector>
using namespace std;

vector<int>findComplement(vector<int> binary){
    int n = binary.size();
    vector<int>twosComp(n+1,0);
    for (int i = n-1, k = twosComp.size() - 1; i >=0; i--, k--)
    {
        twosComp[k] = binary[i] == 0 ? 1:0;
    }
    int carry = 1;
    for (int i = twosComp.size() - 1;i>=0 ;i--)
    {
        int sum = twosComp[i]+carry;
        twosComp[i] = sum % 2;
        carry = sum/2;

        /* code */
    }
    if (carry)
    {
        twosComp[0] = carry;
        /* code */
    }
    return twosComp;   
}

vector<int>findComplement2(vector<int> binary){
    int n = binary.size();
    vector<int>twosComp(n,0);
    for (int i = n-1, k = n-1; i >=0; i--, k--)
    {
        twosComp[k] = binary[i] == 0 ? 1:0;
    }
    int carry = 1;
    for (int i = twosComp.size() - 1;i>=0 ;i--)
    {
        int sum = twosComp[i]+carry;
        twosComp[i] = sum % 2;
        carry = sum/2;

        /* code */
    }
    return twosComp;   
}

int main(){
    vector<int> binary = {0,0,0,0,1,1,0,1};
    vector<int> twosComp = findComplement(binary);
    for (int i = 0; i < twosComp.size(); i++)
    {
        cout<<twosComp[i];
        /* code */
    }
    cout<<endl;
    



    return 0;
}