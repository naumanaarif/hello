#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << "What's your name? ";
    getline(cin, name);

    if (name.empty())
    {
        cout << "Hello, world!\n";
    }
    else
    {
        cout << "Hello, " << name << "!\n";
    }

    return 0;
}