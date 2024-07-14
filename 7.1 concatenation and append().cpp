#include<iostream>
using namespace std;

int main()
{
    string firstName;
    cout << "Type your first name: ";
    cin >> firstName; // get user input from the keyboard
    string lastName;
    cout << "Type your last name: ";
    cin >> lastName; // get user input from the keyboard
    string fullname= firstName +" "+lastName;
    cout <<fullname<<endl;

    string fullName= firstName.append(lastName);
    cout << fullName;

    return 0;
}
