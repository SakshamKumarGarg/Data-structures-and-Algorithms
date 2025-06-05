#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    
    

    

    vector<vector<int> > arr(5, vector<int>(4,0));

    // int totalrows = arr.size();
    // int totalcolumns =  arr[0].size();

    // cout<<totalrows<<" "<<totalcolumns;

    vector<vector<int>> brr(4);

    brr[0] = vector<int>(3);
    brr[1] = vector<int>(4);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(2);

    // int Totalrows = brr.size();
    // int Totalcolumns;
    // for (int i = 0; i < brr.size(); i++)
    // {
    //     cout<<brr[i].size()<<" ";
    //     /* code */
    // } 

    


    // vector<int> first;
    // vector<int> second;
    // // first.reserve(10);

    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);
    // first.push_back(40);
    // // first.push_back(50);
    // // // // first.clear();

    // second.push_back(11);
    // second.push_back(12);
    // second.push_back(14);
    // second.push_back(13);

    // first.swap(second);

    // cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<endl;

    // for(int i:first){
    //     cout<< i<<" ";
    // }

    // first.insert(first.begin(),60);
    // first[2] = 34;
    // first.insert(first.begin()+2,12);


    // cout<<first.capacity()<<endl;
    // cout<<first[0]<<endl;
    // cout<<first.size()<<endl;

    // first.erase(first.begin(),first.end());

    // cout<<first.size()<<endl;
    // cout<<first.max_size()<<endl;

    // vector<int>::iterator it = first.begin();

    // while (it != first.end())
    // {
    //     cout<<*it<<" ";
    //     it++;
    //     /* code */
    // }
    

    // vector<int> marks;
    // marks.push_back(10);
    // marks.push_back(20);

    // marks.pop_back();
    // marks.push_back(20);
    // marks.push_back(30);

    // for(int i:marks){
    //     cout<< i <<" ";
    // }
    // if(marks.empty() == true){
    //     cout<<"vector is empty";
    // }
    // else{
    //     cout<<" vector is not empty";
    // }

    // cout<<marks.front()<<endl;
    // cout<<marks.back()<<endl;

    // cout<<marks.size()<<endl;

    // cout<<*(marks.begin())<<endl;
    

return 0;

}