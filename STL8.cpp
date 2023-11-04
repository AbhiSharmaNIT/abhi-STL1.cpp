//                         8."Queue" basic idea
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("I");
    q.push("am");
    q.push("gentlman");

    cout << "Size before pop : " << q.size() << endl;
    cout << "First string is : " << q.front() << endl;
    cout << "Last string is : " << q.back() << endl
         << endl;

    q.pop();
    cout << "Size after pop : " << q.size() << endl;
    cout << "First string is : " << q.front() << endl;
    cout << "Last string is : " << q.back() << endl
         << endl;

    queue<int> a;

    a.push(1);
    a.push(2);
    a.push(3);

    cout << "Size is : " << a.size() << endl;
    cout << "First element is : " << a.front() << endl;
    cout << "Last element is : " << a.back() << endl;

    return 0;
}