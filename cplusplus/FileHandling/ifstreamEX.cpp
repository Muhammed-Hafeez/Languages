#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream readfile("./ofstreamEX.txt");
    string line;
    while (getline(readfile, line))
    {
        cout << line << endl;
    }
    readfile.close();
    return 0;
}