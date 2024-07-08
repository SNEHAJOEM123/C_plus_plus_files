#include <iostream>
#include <string>
using namespace std;

int main()
{
    int punct_count=0;
    string readme="Hello, There!!!";
    for (auto ch:readme)
    {
        if (ispunct(ch))
        {
            punct_count++;
        }

    }
    cout<<"The number of punctuation characters in "<<readme<<" = "<<punct_count;

    return 0;
}