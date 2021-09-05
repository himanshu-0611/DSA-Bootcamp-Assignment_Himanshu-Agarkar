//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to find largest of 3 numbers entered by user

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter any 3 numbers" << endl;
    cin >> a >> b >> c;
    cout << "Largest of the 3 numbers is " << ((a>b && a>c) ? a : ((b>a && b>c) ? b : c));
    return 0;
}
