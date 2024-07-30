

/*Encapsulation is the first pillar of Object Oriented Programming. It means wrapping up data attributes and methods together. The goal is to keep sensitive data hidden from users;
Encapsulation is considered a good practice where one should always make attributes private for them to become non-modifiable until needed. The data is ultimately more secure as a result of this. Once members are made private, methods to access them or change them should be declared;*/
#include<iostream>
using namespace std;
class Encap{
    private:
        int a;
    public:
    void setA(int aux){
        a = aux;
    }
    int getA(){
        return a;
    }
};
int main(){

    Encap e;
    e.setA(55);
    cout << "getter: " << e.getA() << endl;

    return 0;
}