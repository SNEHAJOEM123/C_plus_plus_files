#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvec;
    myvec={1,2,3,4,5,6};
    for (int i:myvec)
    {
        cout<<i<<endl;
    }
    return 0;

}