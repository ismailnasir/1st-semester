#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float distance,ampg; 
	cout << "\n---------------Gas Calculation-----------------\n";
	cout << "\nProvide the estimated distance in KM: ";
	cin >> distance;
	cout << "Provide average MPG (miles per gallon): " ;
	cin >> ampg;
	cout << "\n_________________________________________________\n";
	cout << distance / ampg << " gallons of gas is reqired to cover " <<distance << " KM " ;
	getch();

}