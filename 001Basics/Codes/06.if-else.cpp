#include<iostream>
using namespace std;

int main(){
    //QUE.1] IF THE PACKAGE OF THE CMPANY IS 10LPA THEN WE WILL ACCEPT THE OFFER
    int package;
    cin>>package;
    if(package>10)
    cout<<"Accepted"<<endl;
    else cout<<"Rejected"<<endl;

    //QUE.2] IF THE RESULT OF THE STUDENT IS LESS THAN 33 THEN PRINT FAIL O/W TRUE
    int marks;
    cin>>marks;
    if(marks>33)
    cout<<"Pass"<<endl;
    else cout<<"Fail"<<endl;

    //QUE.3] IF a>b then print yes o/w no
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    //QUE.4] even or odd
    int num;
    cin>>num;
    if(num%2==0) cout<<"EVEN"<<endl;
    else cout<<"ODD"<<endl;

    //QUE.5] VOWEL OOR CONSONANTS
    char c ;
    cin>>c;
    if(c=='a') cout<<"Vowel"<<endl;
    else if(c=='e') cout<<"Vowel"<<endl;
    else if(c=='i') cout<<"Vowel"<<endl;
    else if(c=='o') cout<<"Vowel"<<endl;
    else if(c=='u') cout<<"Vowel"<<endl;
    else cout<<"Consonant"<<endl;







    return 0 ;
}