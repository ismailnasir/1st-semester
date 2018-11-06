#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int dchoclate = 100, dwchoclate = 80, cblack = 200, cwhite = 180,order,quantity,total;
	cout << "----------------MENU--------------\n";
	cout << "DONUTS: With choclate: 100 RS" << endl;
	cout << "        Without choclate: 80 RS " << endl;
	cout << "\nCOFFE:  Black: 200 RS" << endl;
	cout << "          White: 180 RS" << endl;
	cout << "--------------------------------------"<<endl;
	cout << "Order codes: "<<endl;
	cout << "Enter 1 for Choclate donut " << endl;
	cout << "Enter 2 for Whithout choclate donut" << endl;
	cout << "Enter 3 for Black Cofee" << endl;
	cout << "Enter 4 for White Cofee" << endl;
	cout << "Now enter your order code: ";
	cin >> order;
	if (order == 1)
	{
		cout << "Enter quantity: ";
		cin >> quantity;
		total = quantity*dchoclate;
		cout << "Your bill is: " << total << endl;
		
	}
	else if (order == 2)
	{
		cout << "Enter quantity: ";
		cin >> quantity;
		total = quantity*dwchoclate;
		cout << "Your bill is: " << total << endl;
	}
	else if (order == 3)
	{
		cout << "Enter quantity: ";
		cin >> quantity;
		total = quantity*cblack;
		cout << "Your bill is: " << total << endl;
	}
	else if (order == 4)
	{
		cout << "Enter quantity: ";
		cin >> quantity;
		total = quantity*cwhite;
		cout << "Your bill is: " << total << endl;
	}
	else
	{
		cout << "Wrong input";
	}
	getch();
	return 0;
}