// Cash_Register.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	int choice;
	do //the main program loop, display the main everytime
	{
		cout << "EZ Cash Register Pro XL v3.62" << endl;
		cout << "1- New Sale" << endl;
		cout << "2- Cash Out" << endl;
		cout << "3- Cash In" << endl;
		cout << "4- Report" << endl;
		cout << "0- Exit" << endl;

		cout << "What do u want to do? " << endl;
		cin >> choice;
		double total = 0;
		int num_sales = 0;
		
		if (choice == 1)
		{
			int item_num;
			cout << "Number of items: ";
			cin >> item_num;

		}
		else if (choice == 2)
		{
			double amount;
			cout << "How much? ";
			cin >> amount;
			total -= amount;
		}
		else if (choice == 3)
		{
			double amount;
			cout << "How much? ";
			cin >> amount;
			total += amount;
		}
		else if (choice == 4)
		{
			cout << "number of sales: " << num_sales << endl;
			cout << "Total: " << num_sales << endl;
		}
		else if (choice != 0)
		{
			cout << "INVALID CHOICE!" << endl;
		}

	} while (choice != 0);

	cout << "Thanks for using EZ cash, hope to see u soon!" << endl;

	system("PAUSE");
	return 0;
}