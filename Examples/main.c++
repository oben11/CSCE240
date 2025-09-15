#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int x; // 4 bytes
    float y; // 4 bytes
    double z; // 8 bytes
    char j;

    x = 5;
    cout << "x = " << x << endl;
    cout << "size of x = " << sizeof(x) << " bytes" << endl;
    cout << "x sits at: " << &x << endl;

    cout << "Enter a new value for x:";
    cin >> x;
    cout << "x = " << x << endl;
    cout << "size of x = " << sizeof(x) << " bytes" << endl;
    cout << "x sits at: " << &x << endl;



    cout << "size of y = " << sizeof(y) << " bytes" << endl;
    cout << "y sits at: " << &y << endl;

    cout << "size of z = " << sizeof(z) << " bytes" << endl;
    cout << "z sits at: " << &z << endl;




    cout << "Hello world!" << endl;
    cout << "My name is Oliver" << endl;
    return 0;
}