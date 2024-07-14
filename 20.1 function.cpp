#include<iostream>
using namespace std;

void myFunction() {
  cout << "This is a normal function without parameter and argument."<<endl;
}

void myFunction1(string fname) {
  cout <<"This is a function with parameter(string fname) and argument: ("<<fname<< " Refsnes)\n";
}

void myFunction2(string fname) {
  cout <<fname<< " Refsnes\n";
}

void myFunction3(string country = "Norway") {
  cout <<"This is a function with optional parameter(A parameter with a default value :Norway) and argument: ("<< country << ")\n";
}

void myFunction4(string country = "Norway") {
  cout << country << "\n";
}

int main()
{
    myFunction();
    myFunction1("Anja");
    myFunction2("jenny");
    myFunction2("janer");
    myFunction3("Sweden");
    myFunction4("India");
    myFunction4();
    myFunction4("USA");
    return 0;
}
