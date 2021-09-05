//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to print 2nd largest element of an array, copy paste below link for question

#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cout << "Enter number of elements you want to enter" << endl;
    cin >> n;
    int a[n-1];
    for(i=0; i<n; i++)
    {
        cout << "Enter element " << i+1 << endl;
        cin >> a[i];
    }
    int max = a[n-1];
    for(i=n-1; i>=0; i--)
    {
        if(a[i]>max)
            max = a[i];
    }
    for(i=n-1; i>=0; i--)
    {
        if(a[i]==max)
            a[i]=0;
    }
    int t = a[0];
    for(i=n-1; i>=0; i--)
    {
        if(a[i]>t)
            t = a[i];
    }
    cout << "The 2nd largest element in the array is " << t;
    return 0;
}
