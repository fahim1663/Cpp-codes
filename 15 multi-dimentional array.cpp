#include<iostream>
using namespace std;

int main()
{
    cout<<"Elements of the array: "<<endl;
    string array[2][4]={
        {"A","B","C","D"},
        {"E","F","G","H"}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<array[i][j]<<endl;
        }
    }
    return 0;
}
