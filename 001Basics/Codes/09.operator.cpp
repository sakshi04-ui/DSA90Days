#include <iostream>
using namespace std;

int main(){
    //Post - increment
    int a = 10;
    int b = a++;
    cout<<a<<endl<<b;
    //Pre-increment
    int c = 15;
    int d = ++c;
    cout<<endl;
    cout<<c<<endl<<d;

    //Post - decrement
    int e = 10;
    int f = e--;
    cout<<endl;
    cout<<e<<endl<<f;
    //Pre-decrement
    int g = 15;
    int h = --g;
    cout<<endl;
    cout<<g<<endl<<h;
    
    return 0;
}