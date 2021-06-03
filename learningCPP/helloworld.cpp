#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string name = " krishnaraj ";
    int age = 10;
    cout<< "Hello"<< name <<" my age is " << age << endl;
    float  std = 2.5;
    cout << std << endl;
    string phrase = "Aca";
    cout << phrase.find("a",1) << endl  ;
    cout<< floor(2.5) <<endl ; 
    cout << fmax(3,100) ;
    cout << fmin(2,1) << endl;
    int ageValue ;
    cout << "Enter the age: ";
    cin >> ageValue ;
    cout << "Your age is " << ageValue << endl;
    getchar(); // flush the buffer
    string college ;
    cout << "Enter college name :";
    getline(cin , college);
    cout << "Your College is "<< college ;
    return 0 ;
}
