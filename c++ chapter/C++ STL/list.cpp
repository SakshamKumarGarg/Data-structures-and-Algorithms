#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>first;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    first.insert(first.begin(),100);

    first.erase(first.begin(),first.end());



    // list<int>second;
    // second.push_back(100); 
    // second.push_back(200);
    // second.push_back(300);

    list<int>:: iterator it = first.begin();

    while (it != first.end())
    {
        cout<<*it<<" ";
        it++;
        /* code */
    }
    // cout<<endl;

    // first.swap(second);

    // list<int>:: iterator it3 = first.begin();

    // while (it3 != first.end())
    // {
    //     cout<<*it3<<" ";
    //     it3++;
    //     /* code */
    // }
    // cout<<endl;

     
    //creation
    // list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // myList.push_back(40);

    // myList.push_front(5);
    // // myList.push_front(15);

    // myList.pop_back();
    // myList.pop_front();

    // myList.push_back(10);

    // cout<<"before removing "<<endl;

    // list<int>:: iterator it = myList.begin();

    // while (it != myList.end())
    // {
    //     cout<<*it<<" ";
    //     it++;
    //     /* code */
    // }
    // cout<<endl;

    // myList.remove(10);
    //     cout<<"after removing"<<endl;

    // list<int>:: iterator it2 = myList.begin(); 

    // while (it2 != myList.end())
    // {
    //     cout<<*it2<<" ";
    //     it2++;
    //     /* code */
    // }



    



    // for(int i:myList){
    //     cout<<i<<" ";
    // }
    // myList.clear();

    // if(myList.empty() == true){
    //     cout<<"list is empty";
    // }
    // else{
    //     cout<<"list is not empty";
    // }



    // cout<<myList.size();
    // cout<<myList.front();    
    // cout<<myList.back();    



return 0;

}