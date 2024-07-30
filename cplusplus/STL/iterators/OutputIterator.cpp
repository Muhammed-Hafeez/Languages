#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main()
{
    /*
     An output iterator is used to write elements to a container. The most common example is writing elements to an output stream.
     */
    vector<int> vec = {1, 2, 3, 4, 5};
    ostream_iterator<int> out_it(cout, " ");

    cout << "Output Iterator: ";
    copy(vec.begin(), vec.end(), out_it);
    cout << endl;

    return 0;
}
