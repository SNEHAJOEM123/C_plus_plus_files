#include <iostream>
#include <string>
using namespace std;

int main()
{
    string imempty;
    string hellothere ("How may I help you?");
    string theReply="Can i get some coffee?";
    imempty="Sure. How would you like it?";
    string theAnswer=imempty;
    string alot(10,'s');
    string somess (alot);
    string therequest("with a lot of sugar.Thanks");

    cout<<hellothere<<endl<<theReply<<endl<<theAnswer<<endl<<therequest<<somess;
    
    return 0;

}

