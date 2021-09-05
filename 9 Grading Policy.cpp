//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to round off marks if eligible, copy paste the the below link for question
//https://www.hackerrank.com/challenges/grading/problem

#include <iostream>

using namespace std;

int main()
{
    int m, m1, x, n, i, j, c=0;
    cout << "Enter number of students" << endl;
    cin >> n;
    int a[n-1];
    cout << "Enter marks" << endl;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(j=0; j<n; j++)
    {
        m1 = a[j];
        for(i=1; i<=5; i++)
        {
        if(a[j] < 37)
            break;
        if(a[j]%5 != 0)
            a[j]++;
        else break;
        }
        if(a[j]<37)
        {
            cout << "Marks : " << a[j] << endl;
            c++;
        }
        if(a[j]-m1 < 3 && c==0)
        {
            cout << "Modified marks : " << a[j] << endl;
            c++;
        }
        if(((a[j]-m1) >= 3) && c==0)
        cout << "Marks : " << m1 << endl;
        c=0;
    }
    return 0;
}
