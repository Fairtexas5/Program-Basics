#include <iostream>
using namespace std;

int main() {
    const int pyramidHeight = 20;

    for (int row = 1; row <= pyramidHeight; ++row) {
        for (int space = 1; space <= pyramidHeight - row; ++space) {
            cout << " ";
        }
        for (int x = 1; x <= 2 * row - 1; ++x) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}
