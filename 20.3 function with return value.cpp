#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x * y*(y/x);//study about return
}

int main() {
  cout << myFunction(4, 5)<<endl;
  int z = myFunction(6, 9);
  cout << z;//store the result in a variable
  return 0;
}
