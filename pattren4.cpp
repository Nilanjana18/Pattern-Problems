// Online C++ compiler to run C++ program online
/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

#include <iostream>
using namespace std;

int main() {
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=5;col++)
        {
            cout<<(row-1)*5+col<<" ";
        }
        cout<<"\n";
    }

    return 0;
}