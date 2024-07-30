#include<iostream>
using namespace std;
class Employee{
    int empId;//not access to hafeez
    void fire(){
        cout << "employee is fired";
    }
    public: 
       //attributes
        string name; // accessable to hafeez
        void setId(int id){
            empId = id;
        }
        void showdata(){//methods
            cout << "Employee id " << empId << " name " << name << endl;
        }
};
int main(){

    Employee hafeez;
    hafeez.name = "hasbulla";
    hafeez.setId(2401);
    hafeez.showdata();
    return 0;
}