#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream newfile("./example.js");
    fstream file("./ofstreamEX.txt");
    string line;
    if(file.is_open() && newfile.is_open()){
        while (getline(file, line))
        {
            newfile << line << endl;
        }
    }else{
        cout << "ERROR" << endl;
    }
    
    return 0;
}