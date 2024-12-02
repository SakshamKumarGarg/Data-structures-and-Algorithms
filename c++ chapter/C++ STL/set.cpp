#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> st;

    st.insert(20);
    st.insert(10);
    st.insert(8);
    st.insert(4);
    st.insert(15);

    cout<<st.size()<<endl;

    // if (st.count(155)==0){
    //     cout<<"key not found";
    // }
    // if(st.count(155)==1)
    // {
    //     cout<<"key found";
    //     /* code */
    // }
    

    // if(st.find(15)!=st.end()){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not founs";
    // }

    // st.erase(st.begin(),st.end());
    // st.clear();
    // cout<<st.size()<<endl;

    // if (st.empty())
    // {
    //     cout<<"set is empty";
    //     /* code */
    // }
    // else{
    //     cout<<"set is not empty";
    // }
    

    // unordered_set<int>::iterator it = st.begin();

    // while(it != st.end())
    // {
    //     cout<<*it<<" ";
    //     /* code */
    //     it++;
    // }
    
return 0;

}