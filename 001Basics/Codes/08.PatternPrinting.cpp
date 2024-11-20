#include<iostream>
using namespace std;

int main(){

    //Que-1]Print a hollow rectangle 5 rows-5columns in star
    int row,col;
    for(row = 1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

        cout<<endl;

    //Que-2] Print a hollow rectangle 4 rows-5columns in 10

    for(int row = 1; row<=4;row++){
        for(int col = 1; col<=5;col++){
            cout<<"10"<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //QUE-3]Print a hollow rectangle 5 rows-5columns and print for row 1 print 1, for row 2 print 2 , so on 5 times
    for(int row = 1; row <=5; row++){
        for(int col = 1; col <=5 ; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //QUE-4]Print a hollow rectangle 5 rows-5columns and print for col 1 print 1, for col 2 print 2 , so on 5 times
    for(int row = 1; row <=5; row++){
        for(int col = 1; col <=5 ; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-5]Print a hollow rectangle 5 rows-5columns and print for col 1 print 1, for col 2 print 2 , so on 5 times
    for(int row = 1; row <=5; row++){
        for(int col = 5; col >=1 ; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //QUE-6]Print a hollow rectangle 5 rows-5columns and print for col 1 print 1, for col 2 print 4 that means square of col , so on 5 times
    for(int row = 1; row <=5; row++){
        for(int col = 1; col <=5 ; col++){
            cout<<col*col<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //QUE-7]Print a hollow rectangle 5 rows-5columns and print for ROW 1 print a, for row 2 print b , so on 5 times
    for(int row = 1; row<=5;row++){
        char name = 'a'+ (row-1);
        for(int col = 1; col<=5;col++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    //QUE-8]Print a hollow rectangle 5 rows-5columns and print for row 1 print a, for row 2 print b , so on 5 times
    //Approach-1
    for(int row = 1; row <=5; row++){
        for(char name = 'a'; name <='e' ; name++){
            cout<<name<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Approach-2 for QUE-8] 
    for(int row = 1; row<=5;row++){
        for(int col = 1; col<=5;col++){ 
            char name = 'a'+ (col-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-9]Print a hollow rectangle 5 rows-5columns and print 1, 2 and so on
    //Approach -1
    int count = 1;
    for(int row = 1; row<=5;row++){
        for(int col = 1; col<=5;col++){ 
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }

    cout<<endl;

    //Approach - 2
    
    for(int row = 1; row<=5;row++){
        for(int col = 1; col<=5;col++){ 
            cout<<(row-1)*5+col<<" ";
            
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-10]Print a hollow rectangle 5 rows-5columns and print 1 star for 1 row , 2 star for 2nd row , so on
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-11]Print a hollow rectangle 5 rows-5columns and print 1 for 1 row , 1,2 for 2nd row ,1,2,3 for 3rd row so on
    for(int row=1;row<=5;row++){
        for(int col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-12]Print a hollow rectangle 5 rows-5columns and print 1 for 1 row , 2 1 for 2nd row ,3 2 1 for 3rd row so on
    for(int row=1;row<=5;row++){
        for(int col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-13]Print a hollow rectangle 5 rows-5columns and print a for 1st row, b b for 2nd row, c c c for 3rd row and so on
    for(int row=1;row<=5;row++){
        char name = 'a' + row -1;
        for(int col=1;col<=row;col++){        
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-14]Print a hollow rectangle 5 rows-5columns and print  5 star for 1st row, 4 star for 2nd row and so on
    //Approach-1
    for(int row=5;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Approach -2
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5-(row-1);col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-15]Print a hollow rectangle 5 rows-5columns and print 1  2 3 4 5 for 1st row, 1 2 3 4 for 2nd row so on
    //Approach-1
    for(int row=5;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Approach-2
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5-(row-1);col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-16]Print a hollow rectangle 5 rows-5columns and print 5 for 1dt row, 5 4 for 2nd row, 5 4 3 for 3rd row and so on
    //Approach-1
    for(int row=5;row>=1;row--){
        for(int col=5;col>=row;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Approach -2
    for(row = 1; row<=5;row++){
        for (col = 5; col>=5-(row-1);col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-17]Print 
            *
          * *
        * * *
      * * * *
    * * * * *
    */
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 1; col <= row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-18]Print 
            1
          2 2
        3 3 3
      4 4 4 4
    5 5 5 5 5
*/
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 1; col <= row; col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-19]Print 
            1
          1 2
        1 2 3
      1 2 3 4
    1 2 3 4 5
*/
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 1; col <= row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-20]Print
            A
          A B
        A B C
      A B C D
    A B C D E 
    */
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        
        for(char name = 'A'; name <= 'A'+ (row-1); name++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-21]Print
            1
          2 1 
        3 2 1
      4 3 2 1
    5 4 3 2 1
    */ 
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = row; col >= 1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-22]Print 
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
    */
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 1; col <= 2*row-1; col++){
            cout<<"*"<<" ";
        }
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
    /*
    Que-23]
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1 
*/
    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 1; col <= row; col++){
            cout<<col<<" ";
        }
        for(int col = row-1; col >= 1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    /*QUE-23]Print a hollow triangle 5 rows-5columns and print 5 for 1st row 2*5(no of rows) star, 2nd row 2*4(rows-1)star
    * * * * * * * * * 
      * * * * * * *
        * * * * *
          * * *
            *
*/
    //Approach-1
    for(int row = 5; row>=1; row--){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 2*row-1; col>=1; col--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Approach-2
    for(int row = 5; row>=1; row--){
        for(int col = 1; col <= 5-row; col++){
            cout<<"  ";
        }
        for(int col = 1; col<=2*row-1; col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //QUE-24]Print a diamind shape using space
    for(int row = 5; row >= 1; row--){
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }
        for(col = 1; col<=2*(5-row); col++){
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }

        cout<<endl;
       
    }
    for(int row = 1; row <= 5; row++){
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }
        for(col = 1; col<=2*(5-row); col++){
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }

        cout<<endl;
       
    }
    cout<<endl;

    //QUE-25]Print butterfly pattern
     for(int row = 1; row <=5; row++){
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }
        for(col = 1; col<=2*(5-row); col++){
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }
    for(int row = 4; row >= 1; row--){
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }
        for(col = 1; col<=2*(5-row); col++){
            cout<<"  ";
        }
        for(col = 1 ; col <= row ; col++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    /*QUE-26]Print a design:
            *
           * *
          * * *
         * * * *
        * * * * *
        * * * * *
         * * * *
          * * *
           * *
            *  
    */

    for(int row = 1; row<=5 ; row++){
        for(int col = 1; col <= 5-row; col++){
            cout<<" ";
        }
        for(int col = 1; col <= row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row = 5; row>=1 ; row--){
        for(int col = 1; col <= 5-row; col++){
            cout<<" ";
        }
        for(int col = 1; col <= row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;














    return 0;
}