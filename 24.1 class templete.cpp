#include<iostream>
using namespace std;

class myclass          // The class
{
    public:            // Access specifier
        int mynum;     // Attribute (int variable)
        string mystr;  // Attribute (string variable)
};
int main()
{
    myclass myobj;     // Create an object of MyClass
    // Access attributes and set values
    myobj.mynum=15;
    myobj.mystr="somethings";

    // Print attribute values

    cout<<myobj.mynum<<endl;
    cout<<myobj.mystr;
    return 0;

}
