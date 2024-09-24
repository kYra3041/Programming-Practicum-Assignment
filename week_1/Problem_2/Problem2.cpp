#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c; //coefficient of the quadratic equation

    //prompting the user to enter the coefficients
    cout << "Enter coefficient a : ";
    cin >> a;
    
    cout << "Enter coefficient b : ";
    cin >> b;

    cout << "Enter coefficient c : ";
    cin >> c;

    double discriminant = b * b - 4 * a * c; //calculate the discriminant

    //check the roots based on discriminant
    if (discriminant > 0) {
        //two distinct real root
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "there are two distinct real root : " << endl;
        cout << "x1 : " << x1 << endl;
        cout << "x2 : " << x2 << endl;
    } else if (discriminant == 0) {
        //exactly one real root
        double x = (-b) / (2 * a);
        cout << "there is exactly one real root" << endl;
        cout << "x : " << x << endl;
    } else { // no real root
        cout << "there are no real roots (the roots are complex)" << endl;
    }

    return 0;
}