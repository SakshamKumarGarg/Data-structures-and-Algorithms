#include<bits/stdc++.h>
using namespace std;

class student{
public:
    //Attributes
    int id;
    int age;
    string name;
    int nos; 
    int *gpa;

    // constructor  default constructor 
    student(){
        cout<<"Student ka default constructor called"<<endl;
    }

    // parameterize constructor
    student(int id,int age,string name,int nos,float gpa){
        cout<<"Student ka parameterized constructor called"<<endl;
        this->age = age;
        this->id = id;
        this->name = name;
        this->nos = nos;
        this->gpa = new int(gpa);
    }
    // copy constructor
    student(const student &srcobj){    // srcobj signify A
        cout<<"Student ka parameterized copy constructor called"<<endl;
        this->age = srcobj.age;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    //Behaviour  / methods / functions
    void study(){
        cout<<this->name<<" "<<"Studying"<<endl;
    }
    void sleep(){
        cout<<this->name<<" "<<"Sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<" "<<"Bunking"<<endl;
    }

    // destructor default destructor
    ~student(){
        cout<<"Student ka default destructor called"<<endl;
        delete this->gpa;     // at line 25 there is memory allocation so we need to delete to prevent memory leak
    }
    

};
int main(){
    // student A;
    // A.id = 1;
    // A.age = 15;
    // A.name = "Ranu";
    // A.nos = 6;
    // A.study();
    // student B;
    // B.id = 2;
    // B.age = 15;
    // B.name = "Rahul";
    // B.nos = 5;
    // B.bunk();

    // student A(1,15,"ranu",6);   // it defines on stack 
    // student B(2,11,"Rahul",4);
    // student C(1,15,"ranu",6);
    // student D(1,15,"ranu",6);
    // cout<<A.name<<" "<<A.age<<endl;

    // A.bunk();
    // B.sleep();

    //copy constructor
    // student C = A;   // student C(A);   can also used
    // cout<<C.name<<" "<<A.name<<endl;

    // dynamic allocation or student pointer 
    student *A  = new student(1,14,"Saksham",7,9.8);
    cout<<A->name<<endl;
    cout<<A->age<<endl;
    A->study();
    delete A; /* in dynamic memory allocation we need to called destructor as in 
               dynamic memory allocation we need to delete by itself */
    







    return 0;

}