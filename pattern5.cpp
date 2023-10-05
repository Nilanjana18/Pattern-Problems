// Online C++ compiler to run C++ program online
/*
a
b b 
c c c 
d d d d 
e e e e e
*/

#include <iostream>
using namespace std;
char name;
int main() {
    for(int row=1;row<=5;row++)
    {
        name='a'+(row-1);
        for(int col=1;col<=row;col++)
        {
            cout<<name<<" ";
        }
        cout<<"\n";
    }

    return 0;
}