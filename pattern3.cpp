/*       
     1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5 
     1 2 3 4 5 6 
     1 2 3 4 5 6
*/

// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
for(int row=1;row<=7;row++)
{
    for(int col=1;col<=row;col++)
    {
        if(row==7)
        {
            if(col==7)
            {
                continue;
            }
            else{
            std::cout<<col<<" ";
            }
        }
        else{
        std::cout<<col<<" ";
        }
    }
    std::cout<<"\n";
}
}