#include <iostream>
using namespace std;
template <class t1, class t2>
t1 print(t1 arr, t2 size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return arr;
};

int main()
{

    string arr = "***hafeez***";
    int size = arr.length();
    int arr2[] = {1, 2, 3, 4};


    string str = print<string, int>(arr, size);//using for a string
    cout << str << endl;//which returns a same string
    print<int *, int>(arr2, sizeof(arr2) / sizeof(int));
    //using for an int array
    return 0;
}