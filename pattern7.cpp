// Online C++ compiler to run C++ program online
/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    for(int row=5;row>=1;row--)
    {
        for(int col=5;col>=row;col--)
        {
            cout<<col<<" ";
        }
        cout<<"\n";
    }
}