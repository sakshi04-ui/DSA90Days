#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    // Following are the ways to print the address of first element or 0th index number address
    cout<< arr <<endl; 
    cout<< arr+0 <<endl;
    cout<< &arr[0] <<endl;
    cout<< ptr <<endl;
    cout<<endl;

    // Following are the ways to print teh address of second element or 1st index
    cout<< arr+1 <<endl;
    cout<< &arr[1] <<endl;
    cout<<endl;

    //Print the value of 0 index
    cout<<arr[0] <<endl;
    cout<<*arr <<endl;
    cout<<*(arr+0) <<endl;
    cout<<*ptr <<endl;
    cout<<endl;

    //Print all the address
    for (int i = 0; i < 5; i++){
        cout<< arr+i <<endl;
    }
    cout<<endl;

    //Print all the value
    for (int i = 0; i < 5; i++){
        cout<< *(arr+i) <<endl;
    }
    cout<<endl;

    // Que] With the help of pointer, print the value of array
    int *ptr1 = arr;
    for (int i = 0 ; i < 5 ; i++){
        cout <<ptr[i] <<endl; // other way is cout<<*(ptr+i)
    }
    cout<<endl;

    //Pointer can perform arithmetic operations such as increment and decrement
    for (int i = 0 ; i < 5 ; i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}