#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    double celsius, fahrenheit;

    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;

    fahrenheit = celsiusToFahrenheit(celsius);

    cout << "Temperature in degrees Fahrenheit: " << fahrenheit << endl;

    return 0;
}
