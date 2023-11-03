//                      2. "Vector/dynamic array" operation

#include <iostream>
#include <vector> // for vector, it's required
using namespace std;

int main()
{
    vector<int> a;                                 // take a array in the from of vector
    cout << "Capacity : " << a.capacity() << endl; // Initially capacity is 0 because having no element

    a.push_back(1);                                // by using this function we can insert value
    cout << "Capacity : " << a.capacity() << endl; // capacity will 1

    a.push_back(2);                                // insert value
    cout << "Capacity : " << a.capacity() << endl; // capacity will 2

    a.push_back(3);                                // insert value
    cout << "Capacity : " << a.capacity() << endl; // capacity will 4

    cout << "Size : " << a.size() << endl; // size means how many elements present in the vector

    cout << "Before pop" << endl; // pop remove element from end of the vector but capcity be like balle balle!
    for (int i : a)               // printing the vector (each element)
    {
        cout << i << " ";
    }
    cout << endl;

    a.pop_back(); // apply pop_back() function

    cout << "After pop" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before clear size : " << a.size() << endl;

    a.clear(); // clear function use for clear the element from the vector but capacity be like balle balle!
    cout << "After clear size : " << a.size() << endl;

    return 0;
}