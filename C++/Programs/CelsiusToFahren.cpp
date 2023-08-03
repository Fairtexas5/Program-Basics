#include <iostream>

using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    cout << "Enter temperature in degrees Fahrenheit: ";
    cin >> fahrenheit;

    celsius = fahrenheitToCelsius(fahrenheit);

    cout << "Temperature in degrees Celsius: " << celsius << endl;

    return 0;
}
