//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to check whether a number is prime or not

#include <iostream>

using namespace std;

int main()
{
    int n, i, c=0;
    cout << "Enter a number" << endl;
    cin >> n;
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
            c++;
    }
    if(c==0)
        cout << n << " is a prime number";
    else cout << n << " is not a prime number";
    return 0;
}
