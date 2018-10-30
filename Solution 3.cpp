#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float gtank=20,tavg=21.5,havg=26.8;          //tavg=avg miles per gallon in town,havg= avg miles per gallon on highway//
	cout << "Car averages " << tavg << " MPG in town and " << havg << " MPG when driven on highway" << endl;
	cout << "\n---------------Distance Calculation-----------------\n";
	cout << "\nDistance the car can travel when driven in town= " << gtank*tavg<<" KM" << endl;
	cout << "Distance the car can travel when driven on highway= " << gtank*havg <<" KM"<< endl;
	getch();
	
}