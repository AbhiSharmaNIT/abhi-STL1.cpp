//                      4. Another way to iterate elements of vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // first method
    vector<int> a(4, 2);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // second method
    vector<int> b;
    b.push_back(1);
    b.push_back(2);
    b.push_back(3);
    b.push_back(4);

    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;

    // third method
    vector<int>::iterator it; // using iterator, you can make any name of iterator acc you
    for (it = b.begin(); it < b.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // fourth method
    for (auto element : a)
    {
        cout << element << " ";
    }
}