#include<iostream>
using namespace std;
int main(){

    // break statement;
    while(true){
        cout << "you can never see me again" << endl;
        break;
    }
    // continue statement;
    int i = 1;
    while(i < 27){
        if(i%2==0){
            i++;
            continue;
        }
        char c = 96 + i;
        cout << c << " ";
        i++;
    }
    cout << endl;
    return 0;
}