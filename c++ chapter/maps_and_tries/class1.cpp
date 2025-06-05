#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char value;
        unordered_map<int,TrieNode*> children;
        bool isTerminal;

        TrieNode(char data){
            value = data;
            isTerminal = false;
        }

};
void insertintoTrie(TrieNode* root,string word){
    if(word.length() == 0){
        root->isTerminal = true;
        return ;
    }

    char ch = word[0];
    TrieNode* child;
    if(root->children.count(ch)==1){
        child = root->children[ch];

    }
    else{
        child = new TrieNode(ch);
        root->children[ch] = child;
    }
    insertintoTrie(child,word.substr(1));
}

bool searchTrie(TrieNode* root, string word){


    if(word.length() == 0){
        return root->isTerminal;
    }
    char ch = word[0];
    TrieNode* child;
    if(root->children.find(ch) != root->children.end()){
        child = root->children[ch];
    }
    else{
        return false;
    }
    bool recursionkaAns = searchTrie(child,word.substr(1));

    return recursionkaAns;
}

void deleteword(TrieNode* root,string word){
    if(word.length() == 0){
        root->isTerminal = false;
        return ;
    }
    char ch = word[0];
    TrieNode* child;

    if(root->children.find(ch) != root->children.end()){
        child = root->children[ch];
    }
    else{
        return;

    }
    deleteword(child,word.substr(1));

}

void storeString(TrieNode* root, vector<string> &ans, string output) {
    if(root->isTerminal) {
      ans.push_back(output);
      //no need of return keyword
    }
  
    //1 case main solve krdeta hu
    for(auto i: root->children) {
      char ch = i.first;
      TrieNode* child = i.second;
      output.push_back(ch);
      //baaki recursion dekhlega 
      storeString(child, ans, output);
      //backtracking
      output.pop_back();
    } 
  
  }
  
  
  void findWordsWithPrefix(TrieNode* root, string prefix, vector<string> &ans) {
    //base case
    if(prefix.length() == 0) {
      //prefix pooora search ho chuka h 
      //and root abhi prefix string k last character ko store kkrri hogi
      
      //ab iss last node k niche jitni bhi strings
      //ban skti h, un sabko create krke store krenge using below finction
      string temp = "";
      storeString(root,ans,temp);
      return;
  
    }
  
    //1 case hum sovle krenge 
    char ch = prefix[0];
    TrieNode* child ;
  
    if(root->children.find(ch) != root->children.end()) {
      //present
      child = root->children[ch];
    }
    else {
      //absent
      return;
    }
    //baaki recursion dekhlega 
    findWordsWithPrefix(child, prefix.substr(1), ans);
  }
  
  vector<vector<string> > getSuggestions(TrieNode* root, string prefix) {
    vector<vector<string> > ans;
    string temp = "";
    
  
    for(int i=0; i<prefix.length(); i++) {
      vector<string> tempAns;
  
      char currChar = prefix[i];
      temp.push_back(currChar);
      findWordsWithPrefix(root, temp, tempAns);
      // //add temp prefix in tempAns array
      for(int j=0; j<tempAns.size(); j++) {
        tempAns[j] = temp + tempAns[j];
      }
      ans.push_back(tempAns);
    }
    return ans;
}

int main(){
    insertIntoTrie(root, "baba");
    insertIntoTrie(root, "bala");

    string prefix = "bal";
    vector<vector<string> > ans = getSuggestions(root, prefix);

    for(int i=0; i<ans.size(); i++) {
      for(int j=0; j<ans[i].size(); j++) {
        cout << ans[i][j] <<", ";
      }
      cout << endl;
    }


    // string prefix = "bal";
    // vector<string> ans;
    // findWordsWithPrefix(root, prefix, ans);

    // for(int i=0; i<ans.size(); i++) {
    //   string str = prefix + ans[i];
    //   ans[i] = str;
    //   cout << ans[i] << " " << endl;
    // }

    // //input -> bal
    // b -> ?
    // ba -> ?
    // bal -> ?




    // TrieNode* root = new TrieNode('-');
    // insertintoTrie(root,"cover");
    // insertintoTrie(root,"car");
    // insertintoTrie(root,"care");
    // insertintoTrie(root,"snake");
    // insertintoTrie(root,"fivefoot");
    // insertintoTrie(root,"extremelyWell");
    // insertintoTrie(root,"coward");
    // insertintoTrie(root,"selfobsessed");
    // insertintoTrie(root,"tag");
    // insertintoTrie(root,"take");
    // insertintoTrie(root,"took");


    // bool ans = searchTrie(root,"cover");
    // if(ans) cout<<"Found"<<endl;
    // else{
    //     cout<<"Not Found"<<endl;
    // }

    // deleteword(root,"cover");
    // ans = searchTrie(root,"cover");
    // if(ans) cout<<"Found"<<endl;
    // else{
    //     cout<<"Not Found"<<endl;
    // }
    
    return 0;

}