#include<iostream>
using namespace std;
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;
  protected:
    int z;// Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
//  myObj.y = 50;  // Not allowed (private)
 // myObj.z = 40;
  return 0;
}
