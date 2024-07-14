#include<iostream>
using namespace std;

int main()
{
    string food ="Rice";
    string* ptr= &food;
    cout<<food<<endl;//Value of variable
    cout<<ptr<<endl;//Pointers
    cout<<*ptr<<endl;//Dereference
    *ptr = "Burger";// Change the value of the pointer
    cout << *ptr << endl;// Output the new value of the pointer (Burger)
    cout << food << endl;// Output the new value of the food variable (Burger)
    return 0;
}
