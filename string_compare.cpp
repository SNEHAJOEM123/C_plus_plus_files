#include <iostream>
#include <string>
using namespace std;

int main()
{
    string largest;
    string s1="Book";
    string s2="Bookrack";
    string s3="Bookkeeper";

    if (s1>s2 && s1>s3)
    {
        largest=s1;
    }
    else if (s2>s1 && s2>s3)
    {
        largest=s2;

    }
    else
    {
        largest=s3;
    }
    cout<<"Largest ="<<largest;
      
    return 0;
}
