#include<bits/stdc++.h>
using namespace std;

void printpermutation(string str,int i){     // if not pass by reference  then answer is correct but if we pass by reference then we should backtrack
    if(i>=str.length()){
        cout<<str<<endl;
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        printpermutation(str,i+1);
    }
}
void printpermutation2(string &str,int i){     // if not pass by reference  then answer is correct but if we pass by reference then we should backtrack
    if(i>=str.length()){
        cout<<str<<endl;
        return;
    }

    for(int j=i;j<str.length();j++){
        swap(str[i],str[j]);
        printpermutation(str,i+1);
        swap(str[i],str[j]);            // backtracked 
    }
}

int main(){
    string str = "abc";
    int i = 0;
    // printpermutation(str,i);
    printpermutation2(str,i);
return 0;
}