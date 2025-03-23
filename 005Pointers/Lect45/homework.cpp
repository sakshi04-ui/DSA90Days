// Increment value of variable by 5 with the help of pointer

#include <iostream>
using namespace std;
int main(){
    int num = 10;
    int *p = &num;
    *p = *p + 5;
    cout <<*p;
}