//Himanshu Agarkar
//agarkarhimanshu678@gmail.com

//Program to check whether year entered by the user is leap year or not

#include <iostream>

using namespace std;

int main()
{
    int y;
    cout << "Enter an year" << endl;
    cin >> y;
    if(y%4 == 0)
    {
        if(y%100 == 0)
        {
            if(y%400 == 0)
                cout << y << " is a leap year" << endl;
            else
                cout << y << " is not a leap year" << endl;
        }
        else
            cout << y << " is a leap year" << endl;
    }
    else
        cout << y << " is a not leap year" << endl;
    return 0;
}
