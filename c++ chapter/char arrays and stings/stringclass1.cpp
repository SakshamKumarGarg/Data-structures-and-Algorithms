#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string s1 = "rohit";
    vector<string> s2 = {"G","P","PG"};
    int n = s2.size();
    for(int i = 0;i<n;i++){
        if(s2[i]=="G"){
            cout<<"found";
        }
    }

    // cout<<s1.compare(s2);
    // s2.push_back(s1[0]);
    // cout<<s2;
    // string name = "Hello jee kaise ho saare";
    // string word = "kaise ho";
    // if(name.find(word)!=string::npos){
    
    //     //found
    // }
    // else{
    //     //not found

    // }
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());
    // // cout<<s1;
    // if(s1==s2){
    //     cout<< true;
    //     cout<< s1;
    // }
    // else{
    //     cout<<false;
        
    // }

    // int ans = name.find(word);
    // cout<<ans<<endl;
    // cout<<name.substr(0);
    // string fname = "Saksham";
    // string lname = "Kumar";
    // string ans = fname+" "+lname;
    // cout<<ans;
    // string name = "Maharana Pratap";
    // auto it = name.begin();
    // while(it!=name.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    // cout<<name[0]<<endl;
    // cout<<name.at(0)<<endl;
    // cout<<name.front()<<endl;
    // cout<<name.back()<<endl;
    // cout<<name.length()<<endl;

    // string sentence;
    // cin>>sentence;
    // getline(cin, sentence, '\n');
    // cout<<sentence<<endl;
    // getline(cin,sentence,'\n');
    // string str;
    // str.push_back('a');
    // str.push_back('b');
    // str.push_back('c');
    // str.push_back('d');
    // str.pop_back();
    // cout<<str;
    // cout<<"Enter he input:"<<endl;
    // cin>>str;
    // cout<<str<<endl;
return 0;

}