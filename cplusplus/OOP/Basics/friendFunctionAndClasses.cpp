#include <iostream>
using namespace std;
class Student
{
private:
    int id;

public:
    string name;
    void setId(int _id){
        this->id = _id;
    }
    friend class Major;
};
class Major
{
public:
    int id;
    string name;
    void getStudent(Student st)
    {
        this->id = st.id;//can access private attributes
        this->name = st.name;
    }
    void major()
    {
        cout << this->name << " with id " << this->id
             << " has selected science"
             << endl;
    }
};
int main()
{
    Student st1;
    st1.name = "hasbulla";
    st1.setId(2401);
    Major science;
    science.getStudent(st1);
    science.major();
    return 0;
}