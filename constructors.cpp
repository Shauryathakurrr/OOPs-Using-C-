#include <iostream>
using namespace std;

class constructor
{
public:
    constructor()
    {
        cout << "deafult constructor worked..." << endl;
    }

    constructor(int a)
    {
        cout << "parameterized constructor worked..." << endl;
        cout << "Value is: " << a << endl;
    }

    constructor(const constructor &obj)
    {
        cout << "copy constructor worked..." << endl;
    }
};

int main()
{
    constructor obj1;
    constructor obj2(21);
    constructor obj3(obj2);

    return 0;
}
