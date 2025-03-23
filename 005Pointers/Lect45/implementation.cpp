#include <iostream>
using namespace std;

// This shows the implementation of pointers 
int main(){
    
    // int a = 10;
    // cout<< &a <<endl; // this prints the address of variable a at which location it is present in hexadeciaml form

    // int *ptr = &a; //*ptr => stroes address of variable a
    // cout<< ptr;
    
    // How to access value from address
    int a = 10;
    int b = 30;
    int *ptr = &a; //stores address of variable a
    cout<< ptr <<endl; //prints address

    cout<< *ptr <<endl; // prints teh value present in the address of ptr i.e. prints 10

    a++;
    cout<<*ptr; //prints 11
}
