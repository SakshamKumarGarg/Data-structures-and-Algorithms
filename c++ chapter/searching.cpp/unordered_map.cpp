#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<int,int>table; //roll_no, desk_no
    //insertion
    table[1] = 53; // table 1 key pair pr 53 desk no assign hai 
    table[2] = 54;
    table[3] = 55;
    table[3] = 55;
    table[3] = 55;
    // iterate
    // unordered_map<int,int>::iterator it;
    // for(it = table.begin(); it != table.end(); it++){
    //     int key = it->first;
    //     int value = it-> second;
    //     cout<<"key:"<<key<<" "<<"value:"<<value<<endl;
    // }
    for(auto it:table){
        int key = it.first;
        int value = it.second;
        for(int i = 0;i<value;i++){
            cout<<key;
        }
        // cout<<"key:"<<key<<" "<<"value:"<<value<<endl;
    }

    //access or find?
    // if(table.find(2) != table.end()){
    //     int value = table[2];
    //     cout<<value<<endl;

    // }
    // else{
    //     cout<<"NOT FOUND"<<endl;

    // }
    // // deletion
    // table.erase(2);

    // for(auto it:table){
    //     int key = it.first;
    //     int value = it.second;
    //     cout<<"key:"<<key<<" "<<"value:"<<value<<endl;
    // }


    return 0;
}