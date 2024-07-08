#include <iostream>
using namespace std;
int reused=90;

int main()
{
    int sum=0,value=0;
    int reused;//local variable
    cout<<"Enter the number till which the sum has to be calculated:";
    cin>>value;
    for (int i=1;i<=value;i++)
    {
        sum+=i;
    }
    cout<<"Sum of numbers from 1 to "<<value<< " is "<<sum<<endl;
    cout<<::reused; //global variable
    return 0;
}