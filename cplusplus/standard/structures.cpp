#include<iostream>
using namespace std;
//structurs 
struct bio{
    string species;
    float height;
    string description;
    int power;
};
typedef struct fiction{
    string species;
    float height;
    string description;
    int power;
} fiction;
int main(){
    struct bio rabbit;
    rabbit.description = "cute animal";
    rabbit.species = "mammels";
    rabbit.height = 1.2;
    rabbit.power = 1;
    cout << rabbit.description << endl;//can call like this
    fiction goku;
    goku.species = "sayn";
    goku.description = "unique species you not gonna mess with";
    cout << goku.species << " " << goku.description << endl;
    return 0;
}