/*Writeaprogramthatgeneratesthefollowingoutput:
10 
20 
19
Use an integer constant for the 10, an arithmetic assignment operator to generate the 20, and a decrement operator to generate the 19.*/

#include <iostream>

using namespace std;

int main() {
    const int num1 = 10;
    int num2 = num1 + 10;

    cout << num1 << "\n" << num2 << "\n" << num2-1 << endl;

    return 0;
}

