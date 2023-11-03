//             6. "linked list" (basic)

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    l.push_front(1);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.pop_back();
    cout << "After pop_back " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // cout<<"first index element : "<<l.at(0)<<endl;
    // cout<<"Second index element : "<<l.at(1)<<endl;       //we can't access by at() function
    // cout<<"third index element : "<<l.at(2)<<endl;

    cout << "Front : " << l.front() << endl;
    cout << "Last : " << l.back() << endl;

    cout << "Empty of not : " << l.empty() << endl;

    l.erase(l.begin());
    cout << "After erase " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.pop_front();
    cout << "After pop_front" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }

    return 0;
}