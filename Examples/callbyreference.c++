# include <iostream>
#include <cstdlib>
using namespace std;

double mypow (double &base, double &exp);

int main(int argc, char** argv) {
    double b(0), e(0);
    double product(1);
    

    cout << "enter base and exponent:";
    cin >> b >> e;
    cout << b << " " << e << endl;

    product = mypow(b, e); // function call
    cout << b << " ^ " << e << " = " << product << endl;

    return EXIT_SUCCESS;
}



double mypow (double &base, double &exp) { // type function_name (type arg1, type arg2)
    int result(1);
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}