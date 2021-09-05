//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program for swapping of 2 numbers

#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    cout << "Enter value of a and b" <<endl;
    cin >> a >> b;
    t = a;
    a = b;
    b = t;
    cout << "After swapping, a = " << a << " and b = " << b <<endl;
    return 0;
}
