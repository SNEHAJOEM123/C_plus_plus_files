#include <iostream>
using namespace std;

int main()
{
    int ival=1024;
    int &refval=ival;
    // int refval2;
    cout<<"ival= "<<ival<<endl<<"refval= "<<refval<<endl;
    refval=1000;
    cout<<"New ival= "<<ival<<endl<<"New refval = "<<refval;
    return 0;

}