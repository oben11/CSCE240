#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int anInt1(0);
    int anInt2(0);
    
    cout << "enter two integers:";
    cin >> anInt1 >> anInt2;

    cout << anInt1 << " " << &anInt1 << endl;
    cout << "You entered " << anInt1 << " and " << anInt2 << endl;

    if (anInt1 > anInt2) {
        cout << anInt1 << " is greater than " << anInt2 << endl;
    } else if (anInt1 < anInt2) {
        cout << anInt1 << " is less than " << anInt2 << endl;
    } else {
        cout << anInt1 << " is equal to " << anInt2 << endl;    
    }

}