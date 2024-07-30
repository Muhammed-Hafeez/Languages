#ifndef PRINT_HPP
#define PRINT_HPP
#include<iostream>
using namespace std;

class Utils{
    public:
    template <class T>
    void printArr(T arr,int size){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

#endif