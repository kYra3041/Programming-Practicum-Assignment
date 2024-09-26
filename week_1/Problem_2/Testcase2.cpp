#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c; //coefficient of the quadratic equation

    //prompting the user to enter the coefficients
    cout << "Enter coefficient a : 1 \n";
    
    cout << "Enter coefficient b : -5 \n";

    cout << "Enter coefficient c : 6 \n";

    double discriminant = -5 * -5 - 4 * 1 * 6; //calculate the discriminant

    //check the roots based on discriminant
    if (discriminant > 0) {
        //two distinct real root
        double x1 = (-(-5) + sqrt(discriminant)) / (2 * 1);
        double x2 = (-(-5) - sqrt(discriminant)) / (2 * 1);
        cout << "there are two distinct real root : " << endl;
        cout << "x1 : " << x1 << endl;
        cout << "x2 : " << x2 << endl;
    } else if (discriminant == 0) {
        //exactly one real root
        double x = (-(-5)) / (2 * 1);
        cout << "there is exactly one real root" << endl;
        cout << "x : " << x << endl;
    } else { // no real root
        cout << "there are no real roots (the roots are complex)" << endl;
    }

    return 0;
}