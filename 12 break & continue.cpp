#include <iostream>
using namespace std;

int main() {
    cout<<"Break: when the value is \"4\" jump out of a loop"<<endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
    }
    cout << i << "\n";
}
    cout<< "\n"<<"Continue: when the value is \"4\" jump directly to the next value"<<endl;
    for (int ib = 0; ib < 10; ib++){
        if (ib== 4){
            continue;
        }
        cout<<ib<< "\n";
    }

}


