#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float pizza_diameter, pizza_area, pizza_radius;
	const float pi = 3.14159;
	int	slice,pizza_eaters,total_pizza;
	cout << "----------------- TEHZEEB BAKERS -----------------n";
	cout << "\nWhat is the diameter of pizza (in inches)= ";
	cin >> pizza_diameter;
	cout << "How many people will eat pizza: ";
	cin >> pizza_eaters;
	pizza_radius = pizza_diameter / 2;
	pizza_area = pi*(pow(pizza_radius, 2));
	slice = pizza_area / 14.125;
	total_pizza = (pizza_eaters * 4) / slice;
	cout << "The pizza of " << pizza_diameter << " diametre will have (approx) " << slice << " slices";
	cout << "\nYou will need to order: " << total_pizza << " pizzas\n";

	getch();



}