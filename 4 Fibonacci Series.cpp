//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to display Fibonacci Series up to nth term

#include <iostream>

using namespace std;

int main()
{
    int n1=0, n2=1, n3, i, n;
    cout << "Enter a number of terms required : ";
    cin >> n;
    cout << n1 << endl << n1 << endl ;
    for(i=1; i<=n-2; i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout << n3 << endl;
    }
    return 0;
}
