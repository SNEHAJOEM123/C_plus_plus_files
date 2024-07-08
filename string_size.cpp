#include <iostream>
#include <string>
using namespace std;

int main()
{
    string readme;
    while (getline(cin,readme))
    {
        auto len=readme.size();
        cout<<"The length of the string is "<<len<<endl;

    }
    return 0;

}