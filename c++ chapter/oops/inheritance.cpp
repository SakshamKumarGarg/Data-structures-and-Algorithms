#include<bits/stdc++.h>
using namespace std;

class vehicles{
protected:
    string name;
public:
    
    string model;
    int noOfTyres;

    vehicles(string _name, string _model, int _noOfTyres){
        cout<<"I am inside vehicle ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }
    public:                                                  
    void start_engine(){
        cout<<"Engine is starting"<<name<<" "<<model<<endl;
    }
    void stop_engine(){
        cout<<"Engine is stopping"<<name<<" "<<model<<endl;
    }
    ~vehicles(){
        cout<<"Vehicles dtor called"<<endl;
    }
};


class car : public vehicles{
    protected:
    int noOfDoors;
    string transmissionType;

    public:
    car(string _name, string _model, int _noOfTyres,int _noOfDoors, string _transmissionType):vehicles(_name,_model,_noOfTyres){
        cout<<"I am inside car ctor"<<endl;
        this->noOfDoors = _noOfDoors;
        this->transmissionType = _transmissionType; 
    }
    void startAC(){   
        cout<<"AC has started of"<< name << endl;
    }

    ~car(){
        cout<<"Vehicle Car dtor called"<<endl;
    }
};


class motorcycles : public vehicles{
    protected:
    string handlebarstyle;
    string suspensiontype;

    public:
    motorcycles(string _name, string _model, int _noOfTyres,string _handlebarstyle,string _suspensiontype):vehicles(_name,_model,_noOfTyres){
        cout<<"I am inside the bike ctor"<<endl;
        this->handlebarstyle = _handlebarstyle;
        this->suspensiontype = _suspensiontype;
    }

    void wheelie(){
        cout<<"wheelie kar rhi hai"<< name << endl;
    }

    ~motorcycles(){
        cout<<"Vehicle motorcycle dtor called"<<endl;
    }
};

int main(){
    car A("Maruti 800","LXI",4,4,"Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();
    // cout<<A.name;    // inacessible as it is protected

    motorcycles M("BMW","VXI",2,"U","Hard");

    M.start_engine();
    M.wheelie();
    M.stop_engine();

    return 0;

}