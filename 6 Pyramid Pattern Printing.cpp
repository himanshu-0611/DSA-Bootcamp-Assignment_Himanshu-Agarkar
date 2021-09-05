//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

/*

Program to print the following pattern
     *
    * *
   * * *
  * * * *
 * * * * *

*/


#include <iostream>

using namespace std;

int main()
{
    int rows, i, j, sp;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(i = 1; i <= rows; i++)
    {
       for(sp = i; sp < rows; sp++)
       {
          cout << " ";
       }
       for(j = 1; j <= (2 * i - 1); j++)
       {
          cout << "*";
       }

       cout << "\n";
    }
    return 0;
}
