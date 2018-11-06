#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int pfmarks,boemarks;
	cout << "--------------MENU---------------";
	cout << ""
	cin >> pfmarks;
	cout << "Enter the marks obtained in BOE: ";
	cin >> boemarks;
	if (pfmarks>boemarks)
	{
		cout << "You obtained grater marks in PF"<<endl;
	}
	else if (boemarks>pfmarks)
	{
		cout << "You obtained greater marks in BOE" << endl;
	}
	else
	{
	cout << "You obtained equal marks in both" << endl;
	}
	getch();
	return 0;
}