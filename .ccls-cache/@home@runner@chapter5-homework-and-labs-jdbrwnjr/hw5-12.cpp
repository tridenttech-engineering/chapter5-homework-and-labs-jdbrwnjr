//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip> // For std::setprecision

using namespace std;

int main() {
		double price1, price2, total;

		// Input prices of two items
		cout << "Enter the price of the first item: ";
		cin >> price1;
		cout << "Enter the price of the second item: ";
		cin >> price2;

		// Calculate the total with BoGoHo logic
		if (price1 < price2) {
				total = price1 + (price2 / 2);
		} else {
				total = (price1 / 2) + price2;
		}

		// Display the total amount the customer owes
		cout << fixed << setprecision(2); // Set output to two decimal places
		cout << "The total amount owed is: $" << total << endl;

		return 0;
}
