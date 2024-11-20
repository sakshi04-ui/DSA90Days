#include <iostream>
using namespace std;

int main(){
    //QUE.1] Print 1 to n number
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    cout<<i<<endl;

    //QUE.2] Print square of 1 to n number
    for(int i = 1; i <= n; i++)
    cout<<i*i<<endl;

    //QUE.3] Print all even upto n number
    for(int i = 2; i <= n; i=i+2)
    cout<<i<<endl;

    //QUE.4] Print alphabets'a' to 'z'
    char name;
    for(char name = 'a'; name <= 'z'; name++)
    cout<<name<<endl;

    //QUE.5] Print numbers in reverse order
    for(int i = n; i >= 1; i--)
    cout<<i<<endl;

    //QUE.6] Print numbers from 1 to n but difference is 3
    for(int i = 1; i <= n; i=i+3)
    cout<<i<<endl;

    //QUE.7] Print Table of number M-I
    for(int i = 1; i <= 10; i++)
    cout<<n*i<<endl;

    //QUE.7] Print Table of number M-II
    for(int i = n; i <= n*10; i=i+n)
    cout<<i<<endl;

    //QUE.8] Calculate power of number
    int num,pow;
    cin>>num>>pow;
    for(int i = 1; i <pow; i=i+1)
    num=num*n;
    cout<<num<<endl;

    //QUE.9] Sum of n natural number
    int sum=0;
    for(int i = 1; i <= n; i++)
    sum=sum+i;
    cout<<sum<<endl;

    //QUE.10] Fcatorial of a number
    int fact =1;
    for(int i = 1; i <= n; i++)
    fact=fact*i;
    cout<<fact<<endl;

    //QUE.11] Check a number is prime or not
    if(n<2) {
        cout<<"Not Prime"<<endl;  
        return 0;
    }
    else {
    for(int i = 2; i <= n; i=i+1){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            return 0;
        }
    }
    cout<<"Prime"<<endl;
    }

    //QUE.12] Print nth Fibonnacci number
    int i, prev =1 , last = 0, curr;
    if(n==1){
        cout<<0;
        return 0;
    }
    else if(n==2){
        cout<<1<<endl;
        return 0;
    }
    else{
        for(int i = 3; i<=n ; i++){
            curr = prev + last;
            last = prev;
            prev = curr;
        }
        cout<<curr<<endl;
        return 0;
    }









    return 0;
}