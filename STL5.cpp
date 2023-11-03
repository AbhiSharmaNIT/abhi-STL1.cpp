//                    5. "Deque" in STL
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d; // initialisation

    d.push_front(1); // insert values form front like tunnel
    d.push_back(2);  // insert values form back like tunnel
    d.push_back(3);

    for (int i : d) // print elements
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "first index element : " << d.at(0) << endl; // print position of an elements
    cout << "Second index element : " << d.at(1) << endl;
    cout << "third index element : " << d.at(2) << endl;

    cout << "Front : " << d.front() << endl; // print front element
    cout << "Last : " << d.back() << endl;   // print last element

    cout << "Empty of not : " << d.empty() << endl;

    d.erase(d.begin()); // by this function erase the value
    // or d.erase(d.begin(), d.begin()+1)    //that mean from begi, how many element you should have to remove
    cout << "After erase" << endl;
    for (int i : d)
    {
        cout << i << " "; // print value
    }
    cout << endl;

    d.pop_back(); // remove value form back
    cout << "After pop_back value" << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front(); // remove value form front
    cout << "After pop_front value" << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}