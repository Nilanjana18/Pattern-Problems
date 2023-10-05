// Online C++ compiler to run C++ program online
#include <iostream>
//using namespace std;

int main() {
    char name='a';
    for(int row=1;row<=5;row++)
    {
        for(int col=1;col<=row;col++)
        {
            std::cout<<char(name+(row-1))<<" ";
        }
        std::cout<<"\n";
    }
}