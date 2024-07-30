#include <iostream>
using namespace std;
// printing an array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int); // getting array size
    printArray(arr, size);
    cout << "finding array elements " << arr[2] << endl;
    // multi dimentional arrays;
    int arr2d[][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    int msize = (sizeof(arr2d) /  sizeof(int)) / (sizeof(arr2d[0])/sizeof(int));
    for (int i = 0; i < msize; i++)
    {

        int size1 = sizeof((arr2d[i])) / sizeof(int);
        printArray(arr2d[i], size1);
    }
    return 0;
}