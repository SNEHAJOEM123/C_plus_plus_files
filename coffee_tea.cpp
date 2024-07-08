#include <iostream>
using namespace std;

int main()
{
    int choice=0;
    cout<<"Enter the choice:"<<endl<<"1- for coffee"<<endl<<"2- for tea"<<endl;
    cin>>choice;

    if (choice==1)
    {
        cout<<"Your coffee is on its way.Thank you";
    }

    else if (choice==2)
    {
        cout<<"Your tea is on its way.Thank you ";
    }

    else
    {
        cout<<"You have entered a wrong option";
    }
    return 0;
}