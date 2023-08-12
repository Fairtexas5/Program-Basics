/*Whenavalueissmallerthanafieldspecifiedwithsetw(),theunusedlocationsare,by default, filled in with spaces. 
The manipulator setfill() takes a single character as an argument and causes this character to be substituted for spaces in the empty parts of a field. 
Rewrite the WIDTH program so that the characters on each line between the location name and the population number are filled in with periods instead of spaces, as in
       Portcity.....2425785    */

#include <iostream>
#include <iomanip> // For setw() and setfill()
using namespace std;

int main() {
    cout << setw(20) << setfill('.') << left << "Portcity" << setw(8) << setfill('.') << right << 2425785 << endl;
    cout << setw(20) << setfill('.') << left << "Hightown" << setw(8) << setfill('.') << right << 94237 << endl;
    cout << setw(20) << setfill('.') << left << "Lowville" << setw(8) << setfill('.') << right << 72344 << endl;
    cout << setw(20) << setfill('.') << left << "Hicksville" << setw(8) << setfill('.') << right << 45687 << endl;

    return 0;
}
