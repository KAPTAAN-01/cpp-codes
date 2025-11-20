#include<iostream>
using namespace std;
int main() 
{     repeat:
	cout << "Enter P for pizza (Rs 1200) \n B for Burger(Rs 480) \n F for fries(Rs 150) : ";
	char choice;
	cin >> choice;
	int quantity;
	int bill;
	if (choice == 'P') {
		cout << "How many Pizzas do you want: ";
	    cin >> quantity;
		bill = quantity * 1200;
		cout << "Your Bill is Rs" << bill << endl;

		cout << "From which method you want to pay \n for cash enter C \n for online payment press O: ";
		char choise;
		cin >> choise;
		if (choise == 'C') {
			float tax = bill + (bill * 16 / 100);
			cout << "your bill with tax is:" << tax;

		}
		else if (choise == 'O') {

			float tax = bill + (bill * 6 / 100);
			cout << "your bill with tax is:" << tax;
		}
		else {
			cout << "Invalid input";

		}

		cout << "\n Do you want to purchse some more things \n if yes press Y \n if not press N: ";
		char choise1;
		cin >> choise1;
		if (choise1 == 'Y') {
			goto repeat;
		}
		else {
			cout << "Thanks for coming";
		}

	}
	else if (choice == 'B') {
			cout << "How many Burgers do you want: ";
		    cin >> quantity;
			bill = quantity * 480;
			cout << "Your Bill is Rs" << bill << endl;

			cout << "From which method you want to pay \n for cash enter C \n for online payment press O: ";
			char choise;
			cin >> choise;
			if (choise == 'C') {
				float tax = bill + (bill * 16 / 100);
				cout << "your bill with tax is:" << tax;

			}
			else if (choise == 'O') {

				float tax = bill + (bill * 6 / 100);
				cout << "your bill with tax is:" << tax;
			}
			else {
				cout << "Invalid input";

			}

			cout << "\n Do you want to purchse some more things \n if yes press Y \n if not press N: ";
			char choise1;
			cin >> choise1;
			if (choise1 == 'Y') {
				goto repeat;
			}
			else {
				cout << "Thanks for coming";
			}
	}
	else if (choice == 'F') {
		cout << "How many Fries do you want: ";
		cin >> quantity;
		bill = quantity * 150;
		cout << "Your Bill is Rs" << bill << endl;

		cout << "From which method you want to pay \n for cash enter C \n for online payment press O: ";
		char choise;
		cin >> choise;
		if (choise == 'C') {
			float tax = bill + (bill * 16 / 100);
			cout << "your bill with tax is:" << tax;

		}
		else if (choise == 'O') {

			float tax = bill + (bill * 6 / 100);
			cout << "your bill with tax is:" << tax;
		}
		else {
			cout << "Invalid input";

		}

		cout << "\n Do you want to purchse some more things \n if yes press Y \n if not press N: ";
		char choise1;
		cin >> choise1;
		if (choise1 == 'Y') {
			goto repeat;
		}
		else {
			cout << "Thanks for coming";
		}
	}
	else {
		cout << "Invalid choice!" << endl;
	 }
	
	
	return 0;
}