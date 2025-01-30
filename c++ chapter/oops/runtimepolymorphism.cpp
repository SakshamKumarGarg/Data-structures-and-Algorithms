#include<bits/stdc++.h>
using namespace std;

class shape{
    public:
    virtual void draw(){
        cout<<"Generic drawing .."<<endl;
    }
};

class circle : public shape{
    public:
    void draw() {
        cout<<"Circle is drawing .."<<endl;
    }
};

class rectangle : public shape{
    public:
    void draw() {
        cout<<"Rectangle drawing .."<<endl;
    }
};
class triangle : public shape{
    public:
    void draw() {
        cout<<"triangle drawing .."<<endl;
    }
};

void shapedrawing(shape *s){
    s->draw();
}
int main(){
    // circle c;
    // rectangle r;

    // shapedrawing(&c);
    // shapedrawing(&r);

    // triangle *t = new triangle();
    // shapedrawing(t);

    //w/o virtual keyword 
    shape *s = new shape();
    s->draw();

    //UPCASTING
    shape *s3 = new circle();
    s3->draw();

    circle *c = new circle();
    c->draw();

    //DOWNCASTING
    shape *s2 = new shape();       // here parent shape object is stored in child circle pointer
    circle *c2 = (circle*)s2;
    c2->draw();
    return 0;

}