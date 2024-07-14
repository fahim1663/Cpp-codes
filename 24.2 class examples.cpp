#include<iostream>
using namespace std;

class mythings
{
    public:
        int price;
        string brand;
};
int main()
{
    mythings mycar1;
    mycar1.price=150000;
    mycar1.brand="FORD";
    mythings mycar2;
    mycar2.price=1000000;
    mycar2.brand="BMW";

    int whichcar;
    cout<<"Input car number (1 or 2): "<<endl;
    cin>>whichcar;

    switch(whichcar){
        case 1:
        cout<<mycar1.brand<<endl;
        cout<<mycar1.price<<endl;
        break;
        case 2:
        cout<<mycar2.brand<<endl;
        cout<<mycar2.price<<endl;
        break;
        default:cout<<"Invalid car number!!!";

    }


    return 0;

}
