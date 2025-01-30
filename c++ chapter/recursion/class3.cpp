#include<iostream>
#include<algorithm>
#include<string.h>
#include<limits.h>
#include<vector>

using namespace std;

void printsubsequence(string str,string output,int index, vector<string> &ans){
    if(index==str.length()) {
        // cout<<output<<endl;
        ans.push_back(output);
        return;
    }
    char ch = str[index];
    // output.push_back(ch);
                                                                     
    printsubsequence(str,output+ch,index+1,ans);    //include ch    
    printsubsequence(str,output,index+1,ans);    //exclude ch    

}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    vector<string> ans;
    printsubsequence(str,output,index,ans);
    cout<<ans.size();
    for(auto i : ans){
        cout<<i<<endl;
    }
    return 0;

}