//                     1. Vector array in (STL)

#include <iostream>
#include <array> // for vector array use this headerfile
using namespace std;

int main()
{
    int a[3] = {1, 2, 3}; // basic array

    array<int, 3> b = {4, 5, 6}; // vector representation of array

    int size = b.size(); // technique for finding size of an array
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << " "; // print generally
    }
    cout << endl;

    cout << "Element at 2nd index is : " << b.at(2) << endl; // for particular element use "at"
    cout << "Empty or not : " << b.empty() << endl;          // varification for empty array
    cout << "First element is : " << b.front() << endl;      // for first element
    cout << "Last element is : " << b.back();                // for last element of array

    return 0;
}