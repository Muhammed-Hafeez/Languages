#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream outfile("./ofstreamEX.txt");
    if(outfile.is_open()){
        outfile << "first line" << endl;
        outfile << "second line" << endl;
    }else{
        cout << "could not open the file" << endl;
    }
    return 0;
}