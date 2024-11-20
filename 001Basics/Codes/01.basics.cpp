#include<iostream>
using namespace std;
int main(){
    std::cout<<"Hello World \n"; //if using namespace std; not written you have to write std:: everytime
    cout<<"Hello World! \n";  //if using namespace std; is written we can directly write cout
    cout<<"3+2 \n"; //if we write it in "" itr is treated as string and as it is will be displayed on output screen
    cout<<3+2 <<endl; //if we do not include mathematical terms in "" then it prints the value 
    // we can use <<endl or \n for new line
    return 0;
}