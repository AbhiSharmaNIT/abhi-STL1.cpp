//                    3. Initialisation of vector in different froms

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(5, 1); // if we know the size of the array (Here size is 5 and elements is 1)

    for (int i : a)
    {
        cout << i << " "; // print the elements
    }
    cout << endl
         << "After copy :-" << endl;

    vector<int> b(a); // copy vector a into b vector
    for (int i : b)
    {
        cout << i << " "; // print the elements of vector b
    }
}