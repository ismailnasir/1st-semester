#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	float cprice,stax=0.065,dtax=0.005,ptax=0.01,total;            //cprize=car_prize,stax=sales_tax,dtax=delivery_tax,ptax=property_tax//
	cout << "Enter the price of car=";
	cin >> cprice;
	total = (cprice*stax)+ (cprice*dtax) + (cprice*ptax)+cprice;
	cout << "_______________________________________\n";
	cout << "Taxes on original price" << endl;
	cout << "_______________________________________\n";
	cout << "Sales tax    = " << cprice*stax <<" PKR"<< endl;
	cout << "Delivery tax = " << cprice*dtax << " PKR" << endl;
	cout << "Property tax = " << cprice*ptax << " PKR" << endl;
	cout << "_______________________________________\n";
	cout << "Total price (included taxes)=" << total<<" PKR";





	getch();


}