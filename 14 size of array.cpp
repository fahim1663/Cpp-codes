#include<iostream>
using namespace std;

int main(){

    int num_array[]={10,20,30,40,50};
    cout<<"The result for sizeof() operator: "<<sizeof(num_array)<<endl;//sizeof() operator returns the size of a type in bytes
    int getarraylen = sizeof(num_array)/sizeof(int);//int type is usually 4 bytes
    cout<<"The true size of array: " <<getarraylen<<endl;
    cout<<"The elements of the array: "<<endl;
    for(int i:num_array){
        cout<<i<<endl;
    }
    return 0;
}
