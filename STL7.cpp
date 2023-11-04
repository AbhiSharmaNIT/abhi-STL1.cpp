//                7. Some idea about "Stack"

#include <iostream>
#include <stack> //headerfile for stack
using namespace std;

int main()
{
    stack<string> s; // initialisation for stack in the form of string

    s.push("I"); // insert the element
    s.push("am");
    s.push("gentlman"); // last insertion of the element but this is first for pop

    cout << "Top element is : " << s.top() << endl;

    s.pop(); // remove first element

    cout << "Top element is : " << s.top() << endl; // print top element

    cout << "Size of string is : " << s.size() << endl; // print size of stack

    stack<int> a; // for integers
    a.push(3);
    a.push(4);
    a.push(5);

    cout << "top element is : " << a.top() << endl;
    cout << "Size of stack is : " << a.size();
    return 0;
}
