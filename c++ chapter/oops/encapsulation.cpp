#include <bits/stdc++.h>
using namespace std;


class student
{
private:
    // Attributes
    int id;
    int age;
    string name;
    int nos;

    float *gpa;
    string gf;

public:
    void setGpa(float a)
    {
        // layer of authentication
        *this->gpa = a;
    }

    float getGpa() const
    {
        return *this->gpa;
    }
    int getAge() const
    {
        return this->age;
    }

    // constructor  default constructor
    student()
    {
        cout << "Student ka default constructor called" << endl;
    }

    // parameterize constructor
    student(int id, int age, string name, int nos, float gpa, string gf)
    {
        cout << "Student ka parameterized constructor called" << endl;
        this->age = age;
        this->id = id;
        this->name = name;
        this->nos = nos;
        this->gpa = new float(gpa);
        this->gf = gf;
    }
    // copy constructor
    student(const student &srcobj)
    { // srcobj signify A
        cout << "Student ka parameterized copy constructor called" << endl;
        this->age = srcobj.age;
        this->id = srcobj.id;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behaviour  / methods / functions
    void study()
    {
        cout << this->name << " " << "Studying" << endl;
    }
    void sleep()
    {
        cout << this->name << " " << "Sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " " << "Bunking" << endl;
    }

    // destructor default destructor
    ~student()
    {
        cout << "Student ka default destructor called" << endl;
        delete this->gpa; // at line 25 there is memory allocation so we need to delete to prevent memory leak
    }

public:
    void gfchatting()
    {
        cout << this->name << "chantting with gf" << endl;
    }
};

int main()
{
    student A(1, 12, "ranu", 6, 7.8, "menu");

    cout << A.getGpa() << endl;

    A.setGpa(6.7);

    cout << A.getGpa() << endl;

    A.gfchatting();

    return 0;
}