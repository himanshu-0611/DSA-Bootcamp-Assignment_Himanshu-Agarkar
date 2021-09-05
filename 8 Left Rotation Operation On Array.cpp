//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to rotate the array leftwards for number of times the user wants

#include <iostream>

using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter number of array elements" << endl;
    cin >> n;
    int a[n-1], f;
    cout << "Enter array elements" << endl;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter number of times you want to rotate the array" << endl;
    cin >> f;
    for(j=0; j<f; j++)
    {
        int t = a[n-1];
        for(i=n-1; i>=0; i--)
        {
            a[i] = a[i-1];
        }
        a[0] = t;
    }
    for(i=0; i<n; i++)
    {
        cout << a[i];
    }
    return 0;
}
