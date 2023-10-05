// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
for(int row=1;row<=5;row++){
    for(int col=5;col>=5-(row-1);col--)
    {
        std::cout<<col<<" ";
    }
    std::cout<<"\n";
}
    ///std::cout << "Hello world!";

    return 0;
}