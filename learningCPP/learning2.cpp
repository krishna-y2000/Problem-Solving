#include <iostream>

using namespace std;

string dayOfWeek()
{
    int dayNum ;
    string dayName ;
    cout << "Enter the num of day: ";
    cin >> dayNum;
    switch(dayNum)
    {
        case 1 :
            dayName = "Sunday ";
            break;
        case 2 :
            dayName = "Monday";
            break;
        case 3 : 
            dayName = "Tuesday ";
            break;
        default :
            cout << "Invalid Input" ;
            break;
    }
    return dayName;
}


int main()
{
    cout << "hello"<< endl;
    int number[10] = {10, 20};
    number[9] = 30 ;
    cout << number[1] << " \n";
    cout << number[9] << endl;
   // string day = dayOfWeek();
   // cout << day ;
   int numberGrid[3][3] = {
                            {1,2},
                            {2,3}
                        };
   // cout << numberGrid[2][0];
    cout << &number[9] << "\n"; // hexadecimal address
    //  POINTERS //
    int age = 10 ;
    int *pAge = &age;
    cout << &*pAge;
    return 0 ;
}