#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	char c;
	int a;
	cout << "Enter a character: ";
	cin >> c;
	cout << "ASCII value of " << c << " is " << int(c) << endl;
	a=int(c);
	a = a++;
	cout << "Character of ASCII value "<<a<<" is: "  << char(a)<< endl;
	getch();

	return 0;
}