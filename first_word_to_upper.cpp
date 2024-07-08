#include <iostream>
#include <string>
using namespace std;

int main()
{
    string readme("hello world");
    decltype(readme.size()) i;
    for (i=0;i!=readme.size() && !isspace(readme[i]);i++)
    {
        readme[i]=toupper(readme[i]);

    }
    cout<<readme<<endl;
    return 0;
}