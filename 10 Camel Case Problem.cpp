//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to print number of words in a Camel Case string, copy paste the below link for question
//https://www.hackerrank.com/challenges/camelcase/problem

#include <iostream>

using namespace std;

int main()
{
    int i, c=1;
    string a;
    cout << "Enter a Camel Case String" << endl;
    cin >> a;
    int len = a.size();
    for(i=1; i<len; i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
            c++;
    }
    cout << "Number of words in entered string : " << c;
    return 0;
}
