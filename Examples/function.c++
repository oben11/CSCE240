# include <iostream>
#include <cstdlib>
using namespace std;

int mypow (int base, int exp, int third=0); // function prototype
int mypow (double base, double exp);

int main(int argc, char** argv) {
    int b(0), e(0);
    int product(1);
    

    cout << "enter base and exponent:";
    cin >> b >> e;
    cout << b << " " << e << endl;

    product = mypow(b, e); // function call
    cout << b << " ^ " << e << " = " << product << endl;

    return EXIT_SUCCESS;
}

int mypow (int base, int exp, int third) { // type function_name (type arg1, type arg2)
    int result(1);
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result*third;
}

int rmypow (int base, int exp) { // type function_name (type arg1, type arg2)
    int result(1);
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}