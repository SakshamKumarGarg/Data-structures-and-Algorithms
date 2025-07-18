#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printvector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertionsort(vector<int> &v){
    int n = v.size();
    for(int i = 1;i<n;i++){
        int k = v[i];
        int j = i-1;
        while(j>=0 && v[j]>k){
            v[j+1]=v[j];
            j--;
        }
        v[j+1] = k;

    }
}

int main(){
    vector<int> v = {5,4,3,2,1};
    insertionsort(v);
    printvector(v);
    return 0;
}