#include <iostream>
#include <string>
using namespace std;

int main()
{
    string readme("Hello, there!!!");
    for (auto &ch:readme)
    {
        ch=toupper(ch);
    }
    cout<<"Converted string ="<<readme;
    return 0;
}