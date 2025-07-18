#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

class Student{
    public:
    int marks;
    string name;
    Student(){

    }
    Student(int m, string n){
        this->marks = m;
        this->name = n;


    }
};

class comparator{
    public:
    bool operator()(Student a,Student b){
        return a.marks<b.marks;
    }
};



int main(){
    priority_queue<Student, vector<Student>, comparator > pq;

    pq.push(Student(90,"saksham"));
    pq.push(Student(70,"nitin"));
    pq.push(Student(99,"vishal"));
    pq.push(Student(60,"pushpa"));

    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();

    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;
    pq.pop();
    cout<<pq.top().marks<<" "<<pq.top().name<<endl;



    //max-heap
    // priority_queue<int> pq;
    // priority_queue<int,vector<int>,less<int>>pq3;

    // //min-heap
    // priority_queue<int,vector<int>,greater<int>>pq2;




    return 0;
}