#include<iostream>
using namespace std;

int main()
{
    string txt="Hello world!";
    cout<<"lenth of txt: "<<txt.size()<<endl;
    string txt2="qertyuipsdfghjlzxcvbnm";
    cout<<"lenth of txt2: "<<txt2.size()<<endl;
    txt.at(0) = 'J';
    cout << txt;
    return 0;
}
