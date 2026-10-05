using namespace std;

#include <iostream>

int main()
{
	string item[3]{"","",""};
	double price[3]{0.0,0.0,0.0};
	int choice;
	int itemcount = 0;
	do 
	{
		cout << "Cashier System Menu :  \n";
		cout << "1. Add Item \n";
		cout << "2. Display Items \n";
		cout << "3. Payment \n";
		cout << "4. Exit \n";
		cin >> choice;
		while (choice < 1 || choice>4)
		{
			cout << "Your Choice " << choice << "Is Not Vaild \n";
			cout << "please Choose an ioption (1-4): " ;
			cin >> choice;

		}
		if (choice == 1)
		{
			if (itemcount >= 3)
			{
				cout << "can not add more item (3).\n";
			}
			else {
				string itemname = "";
				double itemprice = 0;
				cout << "Enter item name : ";
				cin >> itemname;
				cout << "Enter item price : ";
				cin >> itemprice;
				if (itemcount == 0) {
					item[0] = itemname;
					price[0] = itemprice;
				}
				else if (itemcount == 1) {
					item[1] = itemname;
					price[1] = itemprice;
				}
				else if (itemcount == 2) {
					item[2] = itemname;
					price[2] = itemprice;
				}
				cout << "Added: " << itemname << "- $ " << itemprice << endl;
				itemcount++;
			}
		}
		else if (choice == 2)
		{
			cout << "\n Item in the cart \n";
			double total = 0.0;
			if (itemcount >= 1)
            {
				cout << item[0] << ", $" << price[0]<<endl;
				total += price[0];

			}
			if (itemcount >= 2)
			{
				cout << item[1] << ", $" << price[1]<<endl;
				total += price[1];

			}
			if (itemcount >= 3)
			{
				cout << item[2] << ", $" << price[2];
				total += price[2];

			}
			cout << " \nTotal: $" << total << endl;
		}
		else if (choice == 3)
		{
			double total = 0.0;
			if (itemcount >= 1)
				total += price[0];
			if (itemcount >= 2)
				total += price[1];
			if (itemcount >= 3)
				total += price[2];
			double payment = 0;
			cout << "Enter payment amount: ";
			cin >> payment;
			if (payment < total)
			{
				cout << "Error payment. please pay at least $" << total << endl;
			}
			else
			{
				double change = payment - total;
				cout << "The payment =$" << payment << endl;
				cout << "The Cost=$" << total << endl;
				cout << "Change=$" << change << endl;
			}
		}
		else if (choice == 4)
		{
			cout << "Exiting the system. Thank you for shopping !\n";
		}


	} while (choice != 4);
}
