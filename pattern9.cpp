/*
1 
1 2
1 2 3
1 2 3 4 
1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int row,col;
    for(row=1;row<=n;row=row+1)
    {
        /*for(col=1;col<=n-row;col=col+1)
        {
            cout<<"  ";
        }*/
        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";
        }
        cout<<"\n";
    }
}