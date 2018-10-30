#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float pizza_diameter,  pizza_area, pizza_radius;
	const float pi = 3.14159;
	int	slice;
	cout << "----------------- TEHZEEB BAKERS -----------------n";
	cout << "\nWhat is the diameter of pizza (in inches)= ";
	cin >> pizza_diameter;
	pizza_radius = pizza_diameter / 2;
	pizza_area = pi*(pow(pizza_radius, 2));
	slice = pizza_area / 14.125;
	cout << "The pizza of " << pizza_diameter << " diametre will have (approx) " << slice << " slices";
	getch();



}