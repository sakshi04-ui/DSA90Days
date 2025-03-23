#include <iostream>
using namespace std;

//Que-1] Calculate length of string
int calculateLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') { // Corrected null terminator
        length++;
    }
    return length;
}
int main(){

    const char *myString = "Hello, World!";
    cout<<"Length of String: "<<calculateLength(myString)<<endl;

    return 0;
    
}