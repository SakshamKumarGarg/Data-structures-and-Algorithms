#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    map<string, string> table;
    table["in"] = "india";
    table.insert(make_pair("en","Engliand"));

    pair<string, string> p;
    p.first = "br";
    p.second = "brazil";

    table.insert(p); 

    if(table.count("im")==0){
        cout<<"key not found";
    }
    if (table.count("im")==1){
        cout<<"Key found"; 
    }

    if(table.find("en")!=table.end()){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found";
    }

    map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        pair<string, string> p = *it;
        cout<< p.first<<" "<<p.second<<endl;
        it++;
        /* code */
    }
    

    cout<<table.size()<<endl;

    cout<<table.at("in")<<endl;


    table.at("in") = "india2";
    table["in"]="india3";
    cout<<table.at("in")<<endl;

    table.clear();
    cout<<table.size()<<endl;

    if(table.empty()){
        cout<<"map is empty";

    }
    else{
        cout<<"map is not empty";
    }

    
return 0;

}