/*Writeaprogramthatcalculateshowmuchmoneyyou’llendupwithifyouinvestan amount of money at a fixed interest rate, compounded yearly. Have the user furnish the initial amount, the number of years, and the yearly interest rate in percent. Some interac- tion with the program might look like this:
    Enter initial amount: 3000
    Enter number of years: 10
    Enter interest rate (percent per year): 5.5
    At the end of 10 years, you will have 5124.43 dollars.
At the end of the first year you have 3000 + (3000 * 0.055), which is 3165. At the end of the second year you have 3165 + (3165 * 0.055), which is 3339.08. Do this as many times as there are years. A for loop makes the calculation easy.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int p, yr;
	double rt, SI;
	cout << "Enter initial amount: ";
	cin>>p;
	cout << "Enter number of years:  ";
	cin>>yr;
	cout<< "Enter interest rate (percent per year): ";
	cin>>rt;
    for (int i=0; i<yr; i++){
        SI = p + ((p*rt)/100);
        p = SI;
    }
	cout << "At the end of 10 years, you will have " << SI << "dollars."<<endl;
	return 0;
}