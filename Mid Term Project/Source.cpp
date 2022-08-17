// Programmers:  Emon Will, Alex Rayer, and Dameon Cheatteam
// Program: Restaurant Midterm Program
// Description: Display Menu, Allow User to Order Food and Change One Item in their Order. 
// Add an Age and Veteran Discount.



#include <iostream>
using namespace std;
int main() {

	string order;
	int vetChoice;
	int age;
	double drinkChoice3 = 4.50;
	double drinkChoice4 = .99;
	double drinkChoice2 = 1.25;
	double drinkChoice1 = 1.50;
	double hamChoice1 = 5.76;
	double hamChoice2 = 7.85;
	double hamChoice3 = 6.17;
	double hamChoice4 = 8.76;
	double sideChoice1 = 1.79;
	double sideChoice2 = 2.35;
	double sideChoice3 = 2.97;
	double sideChoice4 = 3.54;
	double total;
	double taxRate = .09;
	double discount;
	double subtotal = 0;
	int hamChoice;
	int sideChoice;
	int drinkChoice;
	int lettuceChoice;
	double lettuce = .75;
	bool hamSelection;


	cout << "\nHere's our menu:\n";
	cout << "**                                                               **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**                 Spud's Burgers                                **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**                   Hamburgers                                  **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**      All burgers are dressed with Mayo,ketchup,pickles.       **" << endl;
	cout << "** 	         (Lettuce is 75 cents extra)                      **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**               Hamburger...........$5.76                       **" << endl;
	cout << "**               Double Hamburger....$7.85                       **" << endl;
	cout << "**               Cheese Burger.......$6.17                       **" << endl;
	cout << "**               Chili Cheese Burger.$8.76                       **" << endl;
	cout << "**                                                               **" << endl;
	cout << "**																  **" << endl;
	cout << "**																  **" << endl;
	cout << "**                     Sides									  **" << endl;
	cout << "**																  **" << endl;
	cout << "**              Fries...........$1.79                            **" << endl;
	cout << "**              Chili Fries.....$2.35                            **" << endl;
	cout << "**				 Nachos..........$2.97                            **" << endl;
	cout << "**				 Mac & Cheese....$3.54                            **" << endl;
	cout << "**																  **" << endl;
	cout << "**															   	  **" << endl;
	cout << "**																  **" << endl;
	cout << "**					   Drinks                                     **" << endl;
	cout << "**																  **" << endl;
	cout << "**				 Soda.......$1.50                                 **" << endl;
	cout << "**				 Tea........$1.25                                 **" << endl;
	cout << "**				 Beer.......$4.50                                 **" << endl;
	cout << "**				 Water......$0.99                                 **" << endl;

	
	
	
	cout << "Welcome to Spud's Burgers.The home of the BEST Burgers. \n\nBefore taking your order, can we start by getting your age?: " << endl;
	cin >> age;
	if (age <= 12 || age >= 65)
	{
		discount = .10;
		cout << "\nGreat. You qualify for a 10% discount!" << endl;
	}
	else
	{
		discount = 0;
		cout << "\nSorry, You do not qualify for a 10% discount!" << endl;
	}
	cout << "\nAre you a Veteran?:\n1 for Yes\n2 for No\n";
	cin >> vetChoice;
	if (vetChoice == 1)
	{
		discount = .15;
		cout << "\nGreat. You qualify for a 15% discount!" << endl;
	}
	else
	{
		discount = 0;
	}

	
	
	
	cout << "Lets gets your hamburger selection: \n\nPlease Enter a number: \n1 for Hamburger\n2 for Double Hamburger\n3 for Cheese Burger\n4 for Chili Cheese Burger\n" << endl;
	cin >> hamChoice;
	while (hamChoice < 1 || hamChoice > 4)
	{
		cout << "Your entry was invalid" << endl;
		cout << "\nPlease enter a valid hamburger selection: ";
		cin >> hamChoice;
	}
	cout << "You selected option #" << hamChoice << "." << endl;
	if (hamChoice == 1)
	{
		subtotal += hamChoice1;
	}
	else if (hamChoice == 2)
	{
		subtotal += hamChoice2;
	}
	else if (hamChoice == 3)
	{
		subtotal += hamChoice3;
	}
	else
	{
		subtotal += hamChoice4;
	}

	
	
	
	cout << "\nWould you like to add lettuce?:\n1 for Yes\n2 for No\n";
	cin >> lettuceChoice;
	if (lettuceChoice == 1)
	{
		subtotal += lettuce;
		cout << "\nYou added lettuce to your burger." << endl;
	}
	
	
	
	cout << "\nWhat will be your side item on today?: " << endl;
	
	cout << "\Enter a number: \n1 for Fries \n2 for Chili Fries \n3 for Nachos \n4 for Mac & Cheese\n" << endl;
	cin >> sideChoice;
	while (sideChoice < 1 || sideChoice > 4)
	{
		cout << "Your entry was invalid" << endl;
		cout << "\nPlease enter a valid side selection: ";
		cin >> sideChoice;
	}
	cout << "You selected option #" << sideChoice << ".\n" << endl;
	if (sideChoice == 1)
	{
		subtotal += sideChoice1;
	}
	else if (sideChoice == 2)
	{
		subtotal += sideChoice2;
	}
	else if (sideChoice == 3)
	{
		subtotal += sideChoice3;
	}
	else
	{
		subtotal += sideChoice4;
	}
	
	cout << "\nTo top this meal off, what is your choice of drink?: " << endl;
	
	cout << "\nEnter a number: \n1 for Soda \n2 for Tea \n3 for Beer \n4 for Water\n" << endl;
	cin >> drinkChoice;
	while (drinkChoice < 1 || drinkChoice > 4)
	{
		cout << "Your entry was invalid" << endl;
		cout << "Please enter a valid drink selection: ";
		cin >> drinkChoice;
	}
	cout << "You selected option #" << drinkChoice << "." << endl;
	if (drinkChoice == 1)
	{
		subtotal += drinkChoice1;
	}

	else if (drinkChoice == 2)
	{
		subtotal += drinkChoice2;
	}
	else if (drinkChoice == 3)
	{
		subtotal += drinkChoice3;
	}
	else
	{
		subtotal += drinkChoice4;
	}

	cout << "Your subtotal is $" << subtotal << "." << endl;
	cout << "\nYour total after tax is $" << subtotal * taxRate + subtotal << "." << endl;
	system("Pause");
	return 0;


}
