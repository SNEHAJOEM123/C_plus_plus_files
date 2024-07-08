#include <iostream>
using namespace std;

int main()
{
    int current_val=0,val=0;
    if (cin>>current_val)
    {
        int count=1;
        while (cin>>val)
        {
            if (current_val==val)
            {
               count++;

            }
            else
            {
                cout<<current_val<<" occurs "<<count<<" times "<<endl;
                current_val=val;
                count=1;

            }
        }
        cout<<current_val<<" occurs "<<count<<" times "<<endl;
    }
    return 0;
}